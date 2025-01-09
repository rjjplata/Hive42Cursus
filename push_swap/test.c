#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>  // For INT_MIN and INT_MAX


long ft_atoi(const char *str)
{
    long result = 0;
    int sign = 1;
    int i = 0;

    if (!str)
        return 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);
}

void ft_stratoi(const char *str)
{
    long result;
    int i = 0;
    int j = 1;

    while (str[i] != '\0')
    {
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        if (str[i] != '\0')
        {
            result = ft_atoi(&str[i]);
            printf("Input %d: %li\n", j, result);
            j++;
            while ((str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '+')
                i++;
        }
    }
}

// Function to find the length of an array
int ft_arraylength(int array[]) {
    int length = 0;
    while (array[length] != 0) {
        length++;
    }
    return length;
}

// Swap function to swap the first two elements of the array
void ft_swap(int array[]) {
    int temp;
    if (array[0] && array[1]) {
        temp = array[0];
        array[0] = array[1];
        array[1] = temp;
        write(1, "sa\n", 3);  // Print the swap move
    }
}

// Push function to push an element from source array to destination array
void ft_pushA(int arraySRC[], int arrayDST[]) {
    int i = ft_arraylength(arrayDST);
    if (i > 0) {
        while (i > 0) {
            arrayDST[i] = arrayDST[i - 1];
            i--;
        }
    }
    arrayDST[0] = arraySRC[0];
    i = 0;
    while (arraySRC[i] != 0) {
        arraySRC[i] = arraySRC[i + 1];
        i++;
    }
    write(1, "pa\n", 3);  // Print the push move
}

// Rotate function to rotate the elements of arrayA
void ft_rotate(int array[]) {
    int i = ft_arraylength(array) - 1;
    int temp;
    if (i < 1) return;

    temp = array[i];
    while (i > 0) {
        array[i] = array[i - 1];
        i--;
    }
    array[0] = temp;
    write(1, "ra\n", 3);  // Print the rotate move
}

// Reverse rotate function to reverse rotate the elements of arrayA
void ft_revrotate(int array[]) {
    int i = 0;
    int temp;
    int length = ft_arraylength(array);

    if (length < 2) return;

    temp = array[0];
    while (i < length - 1) {
        array[i] = array[i + 1];
        i++;
    }
    array[length - 1] = temp;
    write(1, "rra\n", 4);  // Print the reverse rotate move
}

// Function to find the index of the lowest element in the array
int ft_findlowest(int array[]) {
    int i = 1;
    int min = array[0];
    int min_idx = 0;

    while (array[i] != 0) {
        if (array[i] < min) {
            min = array[i];
            min_idx = i;
        }
        i++;
    }
    return min_idx;
}

// Sorting function to sort arrayA using arrayB
void ft_sort(int arrayA[], int arrayB[]) {
    int lengthA = ft_arraylength(arrayA);
    int lowest_idx;

    while (lengthA > 1) {
        lowest_idx = ft_findlowest(arrayA);

        // Rotate until the smallest element is at the top
        while (arrayA[0] != arrayA[lowest_idx]) {
            if (lowest_idx < lengthA / 2) {
                ft_rotate(arrayA);
            } else {
                ft_revrotate(arrayA);
            }
        }

        ft_pushA(arrayA, arrayB);
        lengthA--;
    }
}

// Function to validate and convert strings to integers using ft_atoi
int ft_validate_and_convert(const char *str) {
    long val = ft_atoi(str);

    // Check if the result is within valid integer range
    if (val < INT_MIN || val > INT_MAX) {
        return 0;  // Invalid input
    }
    return (int)val;  // Return the valid integer
}

int main(int argc, char *argv[]) {
    int *arrayA = NULL;  // Pointer for dynamic arrayA
    int *arrayB = NULL;  // Pointer for dynamic arrayB
    int i = 1;
    int sizeA = 0;       // Number of elements in arrayA
    int max_size = 10000; // Set the maximum size (this can be adjusted)

    if (argc < 2) {
        write(1, "Please provide at least one number as input.\n", 44);
        return 1;
    }

    // Dynamically allocate memory for arrayA and arrayB
    arrayA = (int *)malloc(max_size * sizeof(int));
    arrayB = (int *)malloc(max_size * sizeof(int));
    if (arrayA == NULL || arrayB == NULL) {
        write(1, "Memory allocation failed.\n", 25);
        return 1;
    }

    // Convert command line arguments to integers and store them in arrayA
    while (i < argc && sizeA < max_size) {
        int value = ft_validate_and_convert(argv[i]);
        if (value == 0) {
            write(1, "Invalid Input\n", 14);
            free(arrayA);
            free(arrayB);
            return 1;
        }
        arrayA[sizeA] = value;  // Store valid integer in arrayA
        i++;
        sizeA++;
    }

    // Sort arrayA and move elements to arrayB
    ft_sort(arrayA, arrayB);

    // Free the allocated memory
    free(arrayA);
    free(arrayB);

    return 0;
}

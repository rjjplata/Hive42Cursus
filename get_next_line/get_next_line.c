
char    *get_next_line(int fd)
{
    int byte;

    if (BUFFER_SIZE < 1 || fd < 0)
        return (NULL);
    i = 0;
    if (!strbuff)
        return (NULL);
    str = read(fd, &c, 1); // reads every character in the file
    while (byte > 0)
    {
        strbuff[i] = c;
        i++;
        if (c == '\n' || c == EOF)
            break;
        

    }
    while (i == 0 || byte < 0)
    {
        free(BUFFER);
        return(NULL);
    }

}
void FUN0()
{
    int data;
    data = -1;
    data = 100-1;
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
            strncpy(dest, source, data);
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}

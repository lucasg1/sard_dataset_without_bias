void FUN0(short data)
{
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
            memmove(dest, source, data);
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
void FUN1()
{
    short data;
    data = 0;
    data = 100-1;
    FUN0(data);
}

short FUN0(short data)
{
    data = 100-1;
    return data;
}
short FUN0(short data);
void FUN2()
{
    short data;
    data = 0;
    data = FUN0(data);
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
            memcpy(dest, source, data);
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}

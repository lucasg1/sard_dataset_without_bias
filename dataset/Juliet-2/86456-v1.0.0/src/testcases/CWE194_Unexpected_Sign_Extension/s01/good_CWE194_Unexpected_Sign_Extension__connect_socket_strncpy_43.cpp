namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = 100-1;
}
void FUN1()
{
    short data;
    data = 0;
    FUN0(data);
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
} 

void FUN0(short data);
void FUN1(short data)
{
    FUN0(data);
}
void FUN2(short data);
void FUN3(short data)
{
    FUN2(data);
}
void FUN3(short data);
void FUN0(short data)
{
    FUN3(data);
}
void FUN1(short data);
void FUN7()
{
    short data;
    data = 0;
    data = 100-1;
    FUN1(data);
}
void FUN2(short data)
{
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

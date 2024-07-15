void FUN0(short data);
void FUN1()
{
    short data;
    data = 0;
    data = 100-1;
    FUN0(data);
}
void FUN3(short data);
void FUN4(short data)
{
    FUN3(data);
}
void FUN5(short data);
void FUN0(short data)
{
    FUN5(data);
}
void FUN4(short data);
void FUN5(short data)
{
    FUN4(data);
}
void FUN3(short data)
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

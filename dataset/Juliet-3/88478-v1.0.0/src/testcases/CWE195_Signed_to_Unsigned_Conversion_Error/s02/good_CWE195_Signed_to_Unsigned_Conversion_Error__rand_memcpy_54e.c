void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN1(int data);
void FUN3()
{
    int data;
    data = -1;
    data = 100-1;
    FUN1(data);
}
void FUN5(int data);
void FUN0(int data)
{
    FUN5(data);
}
void FUN7(int data);
void FUN5(int data)
{
    FUN7(data);
}
void FUN7(int data)
{
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

void FUN0(int data);
void FUN1()
{
    int data;
    data = -1;
    data = 100-1;
    FUN0(data);
}
void FUN3(int data);
void FUN0(int data)
{
    FUN3(data);
}
void FUN5(int data);
void FUN3(int data)
{
    FUN5(data);
}
void FUN5(int data)
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

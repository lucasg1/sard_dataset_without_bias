static int VAR0 = 0;
static int VAR1 = 0;
static int FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 100-1;
    }
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    VAR0 = 0; 
    data = FUN0(data);
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
static int FUN2(int data)
{
    if(VAR1)
    {
        data = 100-1;
    }
    return data;
}
void FUN3()
{
    int data;
    data = -1;
    VAR1 = 1; 
    data = FUN2(data);
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

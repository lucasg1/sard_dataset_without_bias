static int VAR0 = 0;
static int VAR1 = 0;
static short FUN0(short data)
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
    short data;
    data = 0;
    VAR0 = 0; 
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
static short FUN2(short data)
{
    if(VAR1)
    {
        data = 100-1;
    }
    return data;
}
void FUN3()
{
    short data;
    data = 0;
    VAR1 = 1; 
    data = FUN2(data);
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

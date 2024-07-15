extern int VAR0;
extern int VAR1;
short FUN0(short data)
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
short FUN1(short data)
{
    if(VAR1)
    {
        data = 100-1;
    }
    return data;
}
int VAR0 = 0;
int VAR1 = 0;
short FUN0(short data);
void FUN3()
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
            strncpy(dest, source, data);
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}
short FUN1(short data);
void FUN5()
{
    short data;
    data = 0;
    VAR1 = 1; 
    data = FUN1(data);
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

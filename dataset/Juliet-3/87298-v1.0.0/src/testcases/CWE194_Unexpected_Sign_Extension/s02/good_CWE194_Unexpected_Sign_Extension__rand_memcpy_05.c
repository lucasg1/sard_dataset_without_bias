static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    short data;
    data = 0;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 100-1;
    }
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
void FUN1()
{
    short data;
    data = 0;
    if(staticTrue)
    {
        data = 100-1;
    }
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

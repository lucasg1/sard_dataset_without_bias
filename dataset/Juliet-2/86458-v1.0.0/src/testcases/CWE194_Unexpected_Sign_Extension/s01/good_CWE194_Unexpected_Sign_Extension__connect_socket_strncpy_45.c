static short VAR0;
static short VAR1;
void FUN0()
{
    short data = VAR1;
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
void FUN1()
{
    short data;
    data = 0;
    data = 100-1;
    VAR1 = data;
    FUN0();
}

static int VAR0;
static int VAR1;
void FUN0()
{
    int data = VAR1;
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
void FUN1()
{
    int data;
    data = -1;
    data = 100-1;
    VAR1 = data;
    FUN0();
}

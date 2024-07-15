short VAR0;
short VAR1;
void FUN0();
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    VAR0 = data;
    FUN0();
}
extern short VAR0;
extern short VAR1;
void FUN0()
{
    short data = VAR0;
    {
        char source[100];
        char dest[100] = "";
        memset(source, 'A', 100-1);
        source[100-1] = '\0';
        if (data < 100)
        {
<START>
            memcpy(dest, source, data);
<END>
            dest[data] = '\0'; 
        }
        printLine(dest);
    }
}

char VAR0;
char VAR1;
char VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    char data;
    data = ' ';
    data = -2;
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    VAR2 = data;
    FUN1();
}
extern char VAR0;
extern char VAR1;
extern char VAR2;
void FUN0()
{
    char data = VAR1;
    if(data < 0) 
    {
        char result = data * 2;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data = VAR2;
    if(data < 0) 
    {
        if (data > (CHAR_MIN/2))
        {
            char result = data * 2;
            printHexCharLine(result);
        }
        else
        {
            printLine("data value is too small to perform multiplication.");
        }
    }
}

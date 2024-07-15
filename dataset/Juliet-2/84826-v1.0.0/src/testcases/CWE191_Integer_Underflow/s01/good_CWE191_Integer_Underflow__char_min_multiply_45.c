static char VAR0;
static char VAR1;
static char VAR2;
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
    char data;
    data = ' ';
    data = -2;
    VAR1 = data;
    FUN0();
}
void FUN2()
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
void FUN3()
{
    char data;
    data = ' ';
    data = CHAR_MIN;
    VAR2 = data;
    FUN2();
}

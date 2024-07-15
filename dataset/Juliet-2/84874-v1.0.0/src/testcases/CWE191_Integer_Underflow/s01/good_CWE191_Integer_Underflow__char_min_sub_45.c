static char VAR0;
static char VAR1;
static char VAR2;
void FUN0()
{
    char data = VAR1;
    {
        char result = data - 1;
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
    if (data > CHAR_MIN)
    {
        char result = data - 1;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
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

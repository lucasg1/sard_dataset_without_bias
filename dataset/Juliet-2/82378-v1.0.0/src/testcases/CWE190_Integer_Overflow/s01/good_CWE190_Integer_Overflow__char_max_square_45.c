static char VAR0;
static char VAR1;
static char VAR2;
void FUN0()
{
    char data = VAR1;
    {
        char result = data * data;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    data = ' ';
    data = 2;
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    char data = VAR2;
    if (abs((long)data) <= (long)sqrt((double)CHAR_MAX))
    {
        char result = data * data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
void FUN3()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    VAR2 = data;
    FUN2();
}

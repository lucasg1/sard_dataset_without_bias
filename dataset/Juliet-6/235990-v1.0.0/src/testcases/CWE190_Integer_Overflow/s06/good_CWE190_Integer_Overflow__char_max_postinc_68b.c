char VAR0;
char VAR1;
char VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    char data;
    data = ' ';
    data = 2;
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    char data;
    data = ' ';
    data = CHAR_MAX;
    VAR2 = data;
    FUN1();
}
extern char VAR0;
extern char VAR1;
extern char VAR2;
void FUN0()
{
    char data = VAR1;
    {
        data++;
        char result = data;
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data = VAR2;
    if (data < CHAR_MAX)
    {
        data++;
        char result = data;
        printHexCharLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

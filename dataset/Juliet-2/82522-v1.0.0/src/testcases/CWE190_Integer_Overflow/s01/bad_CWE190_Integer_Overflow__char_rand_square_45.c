static char VAR0;
static char VAR1;
static char VAR2;
void FUN0()
{
    char data = VAR0;
    {
<START>
        char result = data * data;
<END>
        printHexCharLine(result);
    }
}
void FUN1()
{
    char data;
    data = ' ';
    data = (char)RAND32();
    VAR0 = data;
    FUN0();
}

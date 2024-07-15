static short VAR0;
static short VAR1;
void FUN0()
{
    short data = VAR1;
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
void FUN1()
{
    short data;
    data = -1;
    data = CHAR_MAX-5;
    VAR1 = data;
    FUN0();
}

short VAR0;
short VAR1;
void FUN0();
void FUN1()
{
    short data;
    data = -1;
    data = CHAR_MAX-5;
    VAR1 = data;
    FUN0();
}
extern short VAR0;
extern short VAR1;
void FUN0()
{
    short data = VAR1;
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}

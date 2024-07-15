short VAR0;
short VAR1;
void FUN0();
void FUN1()
{
    short data;
    data = -1;
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
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}

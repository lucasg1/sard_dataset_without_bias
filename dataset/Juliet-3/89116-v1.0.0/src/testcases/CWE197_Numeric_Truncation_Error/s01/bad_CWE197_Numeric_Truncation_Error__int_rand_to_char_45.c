static int VAR0;
static int VAR1;
void FUN0()
{
    int data = VAR0;
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    VAR0 = data;
    FUN0();
}

static int VAR0;
static int VAR1;
void FUN0()
{
    int data = VAR1;
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = CHAR_MAX-5;
    VAR1 = data;
    FUN0();
}

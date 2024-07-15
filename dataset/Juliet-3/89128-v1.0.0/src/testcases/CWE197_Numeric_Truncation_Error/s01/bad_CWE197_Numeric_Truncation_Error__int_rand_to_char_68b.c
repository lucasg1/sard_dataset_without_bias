int VAR0;
int VAR1;
void FUN0();
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    VAR0 = data;
    FUN0();
}
extern int VAR0;
extern int VAR1;
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

static int VAR0;
static int VAR1;
void FUN0()
{
    int data = VAR0;
    {
<START>
        short shortData = (short)data;
<END>
        printShortLine(shortData);
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = SHRT_MAX + 5;
    VAR0 = data;
    FUN0();
}

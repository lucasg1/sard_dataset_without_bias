static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    int data;
    data = -1;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = CHAR_MAX-5;
    }
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
void FUN3()
{
    int data;
    data = -1;
    if(FUN0())
    {
        data = CHAR_MAX-5;
    }
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}

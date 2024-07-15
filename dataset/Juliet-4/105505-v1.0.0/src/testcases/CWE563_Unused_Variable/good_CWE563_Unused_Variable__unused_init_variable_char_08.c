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
    char data;
    data = 'C';
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printHexCharLine(data);
    }
}
void FUN3()
{
    char data;
    data = 'C';
    if(FUN0())
    {
        printHexCharLine(data);
    }
}

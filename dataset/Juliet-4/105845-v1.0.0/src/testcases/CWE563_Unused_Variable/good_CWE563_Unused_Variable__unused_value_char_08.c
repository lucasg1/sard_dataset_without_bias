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
    if(FUN0())
    {
        data = 'C';
    }
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
    if(FUN0())
    {
        data = 'C';
    }
    if(FUN0())
    {
        printHexCharLine(data);
    }
}
void FUN4()
{
    char data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(FUN0())
    {
        data = 'Z';
        printHexCharLine(data);
    }
}
void FUN5()
{
    char data;
    if(FUN0())
    {
        data = 'C';
        printHexCharLine(data);
    }
    if(FUN0())
    {
        data = 'Z';
        printHexCharLine(data);
    }
}

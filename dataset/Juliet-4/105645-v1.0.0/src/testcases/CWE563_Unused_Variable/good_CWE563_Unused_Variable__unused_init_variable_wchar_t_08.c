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
    wchar_t data;
    data = L'W';
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        printWcharLine(data);
    }
}
void FUN3()
{
    wchar_t data;
    data = L'W';
    if(FUN0())
    {
        printWcharLine(data);
    }
}

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
    ; 
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L'W';
        printWcharLine(data);
    }
}
void FUN3()
{
    wchar_t data;
    ; 
    if(FUN0())
    {
        data = L'W';
        printWcharLine(data);
    }
}

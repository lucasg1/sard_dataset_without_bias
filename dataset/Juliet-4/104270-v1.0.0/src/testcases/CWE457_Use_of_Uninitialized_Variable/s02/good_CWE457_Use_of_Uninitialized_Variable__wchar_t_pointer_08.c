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
    wchar_t * data;
    if(FUN0())
    {
        ; 
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    if(FUN0())
    {
        ; 
    }
    if(FUN0())
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN4()
{
    wchar_t * data;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
    }
    if(FUN0())
    {
        printWLine(data);
    }
}
void FUN5()
{
    wchar_t * data;
    if(FUN0())
    {
        data = L"string";
    }
    if(FUN0())
    {
        printWLine(data);
    }
}

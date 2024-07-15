void FUN0()
{
    wchar_t * data;
    if(globalTrue)
    {
        ; 
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN1()
{
    wchar_t * data;
    if(globalTrue)
    {
        ; 
    }
    if(globalTrue)
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN2()
{
    wchar_t * data;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
    }
    if(globalTrue)
    {
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    if(globalTrue)
    {
        data = L"string";
    }
    if(globalTrue)
    {
        printWLine(data);
    }
}

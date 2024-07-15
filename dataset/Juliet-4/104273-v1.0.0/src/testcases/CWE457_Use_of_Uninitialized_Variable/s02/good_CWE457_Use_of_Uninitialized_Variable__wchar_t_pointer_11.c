void FUN0()
{
    wchar_t * data;
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        ; 
    }
    if(globalReturnsTrue())
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN2()
{
    wchar_t * data;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
    }
    if(globalReturnsTrue())
    {
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    if(globalReturnsTrue())
    {
        data = L"string";
    }
    if(globalReturnsTrue())
    {
        printWLine(data);
    }
}

void FUN0()
{
    wchar_t * data;
    if(globalReturnsTrueOrFalse())
    {
        ; 
    }
    else
    {
        ; 
    }
    if(globalReturnsTrueOrFalse())
    {
        data = L"string";
        printWLine(data);
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
    if(globalReturnsTrueOrFalse())
    {
        data = L"string";
    }
    else
    {
        data = L"string";
    }
    if(globalReturnsTrueOrFalse())
    {
        printWLine(data);
    }
    else
    {
        printWLine(data);
    }
}

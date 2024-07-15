void FUN0()
{
    wchar_t * data;
    if(1)
    {
        ; 
    }
    if(0)
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
    if(1)
    {
        ; 
    }
    if(1)
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN2()
{
    wchar_t * data;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
    }
    if(1)
    {
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    if(1)
    {
        data = L"string";
    }
    if(1)
    {
        printWLine(data);
    }
}

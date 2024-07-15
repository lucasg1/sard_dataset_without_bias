void FUN0()
{
    wchar_t * data;
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
    if(GLOBAL_CONST_TRUE)
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN2()
{
    wchar_t * data;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
    }
    if(GLOBAL_CONST_TRUE)
    {
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    if(GLOBAL_CONST_TRUE)
    {
        data = L"string";
    }
    if(GLOBAL_CONST_TRUE)
    {
        printWLine(data);
    }
}

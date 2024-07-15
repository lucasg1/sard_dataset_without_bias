static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    wchar_t * data;
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
    if(STATIC_CONST_FIVE==5)
    {
        data = L"string";
        printWLine(data);
    }
}
void FUN2()
{
    wchar_t * data;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = L"string";
    }
    if(STATIC_CONST_FIVE==5)
    {
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    if(STATIC_CONST_FIVE==5)
    {
        data = L"string";
    }
    if(STATIC_CONST_FIVE==5)
    {
        printWLine(data);
    }
}

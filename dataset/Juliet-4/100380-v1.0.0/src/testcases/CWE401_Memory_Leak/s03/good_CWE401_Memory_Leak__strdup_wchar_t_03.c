void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(5==5)
    {
        {
            wchar_t myString[] = L"myString";
            data = wcsdup(myString);
            printWLine(data);
        }
    }
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(5==5)
    {
        {
            wchar_t myString[] = L"myString";
            data = wcsdup(myString);
            printWLine(data);
        }
    }
    if(5==5)
    {
        free(data);
    }
}
void FUN2()
{
    wchar_t * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wcscpy(data, L"a string");
        printWLine(data);
    }
    if(5==5)
    {
        ; 
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    if(5==5)
    {
        data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
        wcscpy(data, L"a string");
        printWLine(data);
    }
    if(5==5)
    {
        ; 
    }
}

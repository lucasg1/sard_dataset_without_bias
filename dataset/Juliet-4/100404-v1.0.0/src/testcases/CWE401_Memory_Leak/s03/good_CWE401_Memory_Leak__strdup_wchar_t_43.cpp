namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"a string");
    printWLine(data);
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
    ; 
}
void FUN2(wchar_t * &data)
{
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    FUN2(data);
    free(data);
}
} 

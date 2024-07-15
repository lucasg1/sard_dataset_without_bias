static wchar_t * FUN0(wchar_t * data)
{
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"a string");
    printWLine(data);
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    ; 
}
static wchar_t * FUN2(wchar_t * data)
{
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
    return data;
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = FUN2(data);
    free(data);
}

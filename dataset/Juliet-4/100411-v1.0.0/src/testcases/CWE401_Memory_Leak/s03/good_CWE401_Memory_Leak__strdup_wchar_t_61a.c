wchar_t * FUN0(wchar_t * data)
{
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"a string");
    printWLine(data);
    return data;
}
wchar_t * FUN1(wchar_t * data)
{
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
    return data;
}
wchar_t * FUN0(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    ; 
}
wchar_t * FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    data = FUN1(data);
    free(data);
}

void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
void FUN1(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"a string");
    printWLine(data);
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN7()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
    FUN3(data);
}
void FUN9(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN9(data);
}
void FUN11(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN11(data);
}
void FUN9(wchar_t * data)
{
    ; 
}
void FUN11(wchar_t * data)
{
    free(data);
}

void FUN0(wchar_t * * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    FUN0(&data);
}
void FUN2(wchar_t * * data);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    FUN2(&data);
}
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    ; 
}
void FUN2(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    free(data);
}

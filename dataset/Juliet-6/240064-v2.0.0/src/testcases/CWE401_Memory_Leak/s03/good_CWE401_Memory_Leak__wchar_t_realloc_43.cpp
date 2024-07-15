namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
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
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
}
void FUN3()
{
    wchar_t * data;
    data = NULL;
    FUN2(data);
    free(data);
}
} 

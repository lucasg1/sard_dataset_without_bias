void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    FUN2(data);
}
void FUN5(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN5(data);
}
void FUN7(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN7(data);
}
void FUN9(wchar_t * data);
void FUN10(wchar_t * data)
{
    FUN9(data);
}
void FUN11(wchar_t * data);
void FUN12(wchar_t * data)
{
    FUN11(data);
}
void FUN10(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN10(data);
}
void FUN12(wchar_t * data);
void FUN7(wchar_t * data)
{
    FUN12(data);
}
void FUN9(wchar_t * data)
{
    ; 
}
void FUN11(wchar_t * data)
{
    free(data);
}

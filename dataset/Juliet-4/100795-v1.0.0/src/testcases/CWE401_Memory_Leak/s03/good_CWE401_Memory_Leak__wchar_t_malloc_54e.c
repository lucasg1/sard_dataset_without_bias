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
void FUN4(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    FUN4(data);
}
void FUN6(wchar_t * data);
void FUN7()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    FUN6(data);
}
void FUN9(wchar_t * data);
void FUN4(wchar_t * data)
{
    FUN9(data);
}
void FUN11(wchar_t * data);
void FUN6(wchar_t * data)
{
    FUN11(data);
}
void FUN1(wchar_t * data);
void FUN9(wchar_t * data)
{
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN11(wchar_t * data)
{
    FUN3(data);
}
void FUN0(wchar_t * data)
{
    ; 
}
void FUN2(wchar_t * data)
{
    free(data);
}

void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN2(data);
}
void FUN4(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN4(data);
}
void FUN5(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN5(data);
}
void FUN4(wchar_t * data)
{
<START>
<END>
    ; 
}

void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)calloc(20, sizeof(wchar_t));
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
void FUN3(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN3(data);
}
void FUN6(wchar_t * data);
void FUN2(wchar_t * data)
{
    FUN6(data);
}
void FUN6(wchar_t * data)
{
<START>
    wcscpy(data, L"Initialize");
<END>
    printWLine(data);
    free(data);
}

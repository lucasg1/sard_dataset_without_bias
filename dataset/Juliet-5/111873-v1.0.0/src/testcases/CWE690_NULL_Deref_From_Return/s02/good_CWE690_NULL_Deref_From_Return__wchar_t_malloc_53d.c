void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)malloc(20*sizeof(wchar_t));
    FUN0(data);
}
void FUN3(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN3(data);
}
void FUN5(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN5(data);
}
void FUN5(wchar_t * data)
{
    if (data != NULL)
    {
        wcscpy(data, L"Initialize");
        printWLine(data);
        free(data);
    }
}

void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN1(wchar_t * data);
void FUN3()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)malloc(20*sizeof(wchar_t));
    FUN1(data);
}
void FUN5(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN5(data);
}
void FUN7(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN7(data);
}
void FUN7(wchar_t * data)
{
    if (data != NULL)
    {
        wcscpy(data, L"Initialize");
        printWLine(data);
        free(data);
    }
}

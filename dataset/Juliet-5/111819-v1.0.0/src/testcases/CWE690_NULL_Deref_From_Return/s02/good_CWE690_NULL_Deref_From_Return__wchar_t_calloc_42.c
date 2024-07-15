static wchar_t * FUN0(wchar_t * data)
{
    data = (wchar_t *)calloc(20, sizeof(wchar_t));
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    data = FUN0(data);
    if (data != NULL)
    {
        wcscpy(data, L"Initialize");
        printWLine(data);
        free(data);
    }
}

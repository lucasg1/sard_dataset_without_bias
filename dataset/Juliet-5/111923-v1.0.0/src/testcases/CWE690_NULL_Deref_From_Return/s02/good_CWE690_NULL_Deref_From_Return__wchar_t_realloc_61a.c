wchar_t * FUN0(wchar_t * data)
{
    data = (wchar_t *)realloc(data, 20*sizeof(wchar_t));
    return data;
}
wchar_t * FUN0(wchar_t * data);
void FUN2()
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

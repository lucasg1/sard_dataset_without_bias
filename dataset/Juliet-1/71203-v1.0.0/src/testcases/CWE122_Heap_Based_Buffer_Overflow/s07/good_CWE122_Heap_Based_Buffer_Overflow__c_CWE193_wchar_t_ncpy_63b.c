void FUN0(wchar_t * * data);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
    FUN0(&data);
}
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    {
        wchar_t source[10+1] = SRC_STRING;
        wcsncpy(data, source, wcslen(source) + 1);
        printWLine(data);
        free(data);
    }
}

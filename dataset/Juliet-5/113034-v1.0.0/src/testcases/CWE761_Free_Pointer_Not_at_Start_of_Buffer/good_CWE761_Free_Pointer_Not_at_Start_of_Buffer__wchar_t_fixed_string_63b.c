void FUN0(wchar_t * * data);
void FUN1()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    data[0] = L'\0';
    wcscpy(data, BAD_SOURCE_FIXED_STRING);
    FUN0(&data);
}
void FUN0(wchar_t * * dataPtr)
{
    wchar_t * data = *dataPtr;
    {
        size_t i;
        for (i=0; i < wcslen(data); i++)
        {
            if (data[i] == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
}

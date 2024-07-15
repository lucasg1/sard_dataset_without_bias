void FUN0(wchar_t * data)
{
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
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0';
    wcscpy(data, BAD_SOURCE_FIXED_STRING);
    funcPtr(data);
}

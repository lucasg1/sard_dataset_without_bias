void FUN0()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)calloc(20, sizeof(wchar_t));
    goto sink;
sink:
    if (data != NULL)
    {
        wcscpy(data, L"Initialize");
        printWLine(data);
        free(data);
    }
}

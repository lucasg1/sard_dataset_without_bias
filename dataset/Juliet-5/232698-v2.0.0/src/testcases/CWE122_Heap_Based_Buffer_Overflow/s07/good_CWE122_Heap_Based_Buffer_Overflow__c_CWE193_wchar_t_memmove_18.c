void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    {
        wchar_t source[10+1] = SRC_STRING;
        memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
        printWLine(data);
        free(data);
    }
}

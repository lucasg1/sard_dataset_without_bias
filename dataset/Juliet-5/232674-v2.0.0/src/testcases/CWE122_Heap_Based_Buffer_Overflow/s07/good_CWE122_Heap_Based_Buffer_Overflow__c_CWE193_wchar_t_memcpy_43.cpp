namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
    {
        wchar_t source[10+1] = SRC_STRING;
        memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
        printWLine(data);
        free(data);
    }
}
} 

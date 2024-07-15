namespace NAMESPACE0
{
static wchar_t * FUN0(wchar_t * data)
{
    data = new wchar_t[10+1];
    return data;
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
    {
        wchar_t source[10+1] = SRC_STRING;
        memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
        printWLine(data);
        delete [] data;
    }
}
} 

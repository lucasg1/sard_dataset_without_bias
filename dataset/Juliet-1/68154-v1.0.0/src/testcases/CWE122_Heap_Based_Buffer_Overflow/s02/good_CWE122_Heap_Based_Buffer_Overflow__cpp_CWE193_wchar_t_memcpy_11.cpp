namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[10+1];
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
        printWLine(data);
        delete [] data;
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t[10+1];
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
        printWLine(data);
        delete [] data;
    }
}
} 

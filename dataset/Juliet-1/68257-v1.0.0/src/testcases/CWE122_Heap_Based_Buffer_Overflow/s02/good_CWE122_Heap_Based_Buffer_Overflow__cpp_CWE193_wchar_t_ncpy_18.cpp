namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t[10+1];
    {
        wchar_t source[10+1] = SRC_STRING;
        wcsncpy(data, source, wcslen(source) + 1);
        printWLine(data);
        delete [] data;
    }
}
} 

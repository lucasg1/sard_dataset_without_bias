namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = new wchar_t[10];
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    FUN0(data);
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
<END>
        printWLine(data);
        delete [] data;
    }
}
} 

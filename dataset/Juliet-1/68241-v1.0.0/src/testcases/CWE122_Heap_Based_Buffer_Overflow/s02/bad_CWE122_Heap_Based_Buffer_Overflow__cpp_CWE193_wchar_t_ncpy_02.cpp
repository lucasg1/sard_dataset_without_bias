namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(1)
    {
        data = new wchar_t[10];
    }
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        wcsncpy(data, source, wcslen(source) + 1);
<END>
        printWLine(data);
        delete [] data;
    }
}
} 

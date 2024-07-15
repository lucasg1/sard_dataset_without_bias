namespace NAMESPACE0
{
void FUN0()
{
    int i;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new wchar_t[10];
    }
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

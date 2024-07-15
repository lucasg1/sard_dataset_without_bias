namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[10];
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            wchar_t source[10+1] = SRC_STRING;
<START>
            wcscpy(data, source);
<END>
            printWLine(data);
            delete [] data;
        }
    }
}
} 

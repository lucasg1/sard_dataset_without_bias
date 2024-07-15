void FUN0()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
<START>
        printWcharLine(data[0]);
<END>
    }
}

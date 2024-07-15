void FUN0()
{
    wchar_t * data;
    data = NULL;
    {
        wchar_t myString[] = L"myString";
        data = wcsdup(myString);
        printWLine(data);
    }
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
<START>
<END>
        ; 
    }
}

void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)calloc(100, sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
<START>
<END>
        ; 
    }
}

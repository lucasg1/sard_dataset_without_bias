void FUN0()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        ; 
    }
}
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        free(data);
    }
}

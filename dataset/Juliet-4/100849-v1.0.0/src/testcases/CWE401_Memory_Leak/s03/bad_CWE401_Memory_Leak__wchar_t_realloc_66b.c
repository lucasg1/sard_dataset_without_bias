void FUN0(wchar_t * dataArray[]);
void FUN1()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    data = NULL;
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    wcscpy(data, L"A String");
    printWLine(data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
<START>
<END>
    ; 
}

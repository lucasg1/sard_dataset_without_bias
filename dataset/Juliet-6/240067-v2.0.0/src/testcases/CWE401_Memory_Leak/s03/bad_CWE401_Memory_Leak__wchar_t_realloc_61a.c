wchar_t * FUN0(wchar_t * data)
{
    data = (wchar_t *)realloc(data, 100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    return data;
}
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    data = NULL;
    data = FUN0(data);
<START>
<END>
    ; 
}

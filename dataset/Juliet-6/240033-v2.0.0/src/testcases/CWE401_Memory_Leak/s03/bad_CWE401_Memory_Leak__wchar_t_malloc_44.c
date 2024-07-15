void FUN0(wchar_t * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wcscpy(data, L"A String");
    printWLine(data);
    funcPtr(data);
}

void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL; 
    data = (wchar_t *)malloc(20*sizeof(wchar_t));
    funcPtr(data);
}
void FUN0(wchar_t * data)
{
<START>
    wcscpy(data, L"Initialize");
<END>
    printWLine(data);
    free(data);
}

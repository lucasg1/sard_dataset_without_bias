void FUN0(void * dataVoidPtr);
void FUN1()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(10*sizeof(wchar_t));
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
    {
        wchar_t source[10+1] = SRC_STRING;
<START>
        wcscpy(data, source);
<END>
        printWLine(data);
        free(data);
    }
}

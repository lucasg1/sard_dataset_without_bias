void FUN0(void * dataVoidPtr);
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)realloc(data, 20*sizeof(wchar_t));
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    wchar_t * * dataPtr = (wchar_t * *)dataVoidPtr;
    wchar_t * data = (*dataPtr);
    if (data != NULL)
    {
        wcscpy(data, L"Initialize");
        printWLine(data);
        free(data);
    }
}

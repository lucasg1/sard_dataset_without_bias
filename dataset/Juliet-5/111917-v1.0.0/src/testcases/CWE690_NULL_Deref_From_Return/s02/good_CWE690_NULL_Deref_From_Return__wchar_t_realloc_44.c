void FUN0(wchar_t * data)
{
    if (data != NULL)
    {
        wcscpy(data, L"Initialize");
        printWLine(data);
        free(data);
    }
}
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    data = NULL; 
    data = (wchar_t *)realloc(data, 20*sizeof(wchar_t));
    funcPtr(data);
}

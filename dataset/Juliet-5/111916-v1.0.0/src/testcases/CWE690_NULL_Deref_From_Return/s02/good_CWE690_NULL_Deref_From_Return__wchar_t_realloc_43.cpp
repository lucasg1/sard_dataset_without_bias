namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    data = (wchar_t *)realloc(data, 20*sizeof(wchar_t));
}
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    FUN0(data);
    if (data != NULL)
    {
        wcscpy(data, L"Initialize");
        printWLine(data);
        free(data);
    }
}
} 

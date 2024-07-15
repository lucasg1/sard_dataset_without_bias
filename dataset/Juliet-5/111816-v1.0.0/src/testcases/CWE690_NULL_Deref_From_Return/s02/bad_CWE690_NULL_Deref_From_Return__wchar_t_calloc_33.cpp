namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL; 
    data = (wchar_t *)calloc(20, sizeof(wchar_t));
    {
        wchar_t * data = dataRef;
<START>
        wcscpy(data, L"Initialize");
<END>
        printWLine(data);
        free(data);
    }
}
} 

wchar_t * FUN0(wchar_t * data)
{
    data = (wchar_t *)malloc(20*sizeof(wchar_t));
    return data;
}
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    data = NULL; 
    data = FUN0(data);
<START>
    wcscpy(data, L"Initialize");
<END>
    printWLine(data);
    free(data);
}

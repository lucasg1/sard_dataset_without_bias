void FUN0(wchar_t * data)
{
<START>
    wcscpy(data, L"Initialize");
<END>
    printWLine(data);
    free(data);
}
void FUN1()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)calloc(20, sizeof(wchar_t));
    FUN0(data);
}

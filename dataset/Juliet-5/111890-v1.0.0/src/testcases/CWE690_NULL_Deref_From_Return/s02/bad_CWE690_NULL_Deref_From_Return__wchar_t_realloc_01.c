void FUN0()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)realloc(data, 20*sizeof(wchar_t));
<START>
    wcscpy(data, L"Initialize");
<END>
    printWLine(data);
    free(data);
}

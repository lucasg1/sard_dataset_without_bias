namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0';
    wcscpy(data, BAD_SOURCE_FIXED_STRING);
    {
        wchar_t * data = dataRef;
<START>
        for (; *data != L'\0'; data++)
<END>
        {
            if (*data == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
}
} 

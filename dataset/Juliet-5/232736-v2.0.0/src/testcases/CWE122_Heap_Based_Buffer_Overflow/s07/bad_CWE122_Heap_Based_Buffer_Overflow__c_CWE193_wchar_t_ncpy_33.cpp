namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    data = (wchar_t *)malloc(10*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[10+1] = SRC_STRING;
<START>
            wcsncpy(data, source, wcslen(source) + 1);
<END>
            printWLine(data);
            free(data);
        }
    }
}
} 

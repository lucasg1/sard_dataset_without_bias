namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t VAR1[10];
    wchar_t VAR2[10+1];
    data = VAR1;
    data[0] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[10+1] = SRC_STRING;
<START>
            memmove(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
<END>
            printWLine(data);
        }
    }
}
} 

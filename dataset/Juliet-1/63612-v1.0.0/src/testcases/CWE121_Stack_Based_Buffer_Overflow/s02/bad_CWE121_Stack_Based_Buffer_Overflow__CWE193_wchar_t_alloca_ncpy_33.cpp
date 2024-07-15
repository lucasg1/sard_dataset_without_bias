namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t * VAR1 = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * VAR2 = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
    data = VAR1;
    data[0] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[10+1] = SRC_STRING;
<START>
            wcsncpy(data, source, wcslen(source) + 1);
<END>
            printWLine(data);
        }
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t VAR1[10];
    wchar_t VAR2[10+1];
    data = VAR2;
    data[0] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[10+1] = SRC_STRING;
            wcsncpy(data, source, wcslen(source) + 1);
            printWLine(data);
        }
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t * VAR1 = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * VAR2 = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = VAR1;
    data[0] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); 
            source[100-1] = L'\0'; 
<START>
            wcscpy(data, source);
<END>
            printWLine(data);
        }
    }
}
} 

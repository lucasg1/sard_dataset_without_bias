namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t * VAR1 = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * VAR2 = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(VAR1, L'A', 50-1); 
    VAR1[50-1] = L'\0'; 
    wmemset(VAR2, L'A', 100-1); 
    VAR2[100-1] = L'\0'; 
    data = VAR2;
    {
        wchar_t * data = dataRef;
        {
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1);
            dest[100-1] = L'\0'; 
            memcpy(dest, data, wcslen(dest)*sizeof(wchar_t));
            dest[100-1] = L'\0';
            printWLine(dest);
        }
    }
}
} 

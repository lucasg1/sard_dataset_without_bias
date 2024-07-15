namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    data = NULL;
    data = (wchar_t *)malloc(50*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    {
        wchar_t * data = dataRef;
        {
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1);
            dest[100-1] = L'\0'; 
<START>
            memmove(dest, data, wcslen(dest)*sizeof(wchar_t));
<END>
            dest[100-1] = L'\0';
            printWLine(dest);
            free(data);
        }
    }
}
} 

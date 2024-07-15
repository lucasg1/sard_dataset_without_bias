void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    wmemset(data, L'A', 100-1); 
    data[100-1] = L'\0'; 
    funcPtr(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[50] = L"";
<START>
        wcsncpy(dest, data, wcslen(data));
<END>
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}

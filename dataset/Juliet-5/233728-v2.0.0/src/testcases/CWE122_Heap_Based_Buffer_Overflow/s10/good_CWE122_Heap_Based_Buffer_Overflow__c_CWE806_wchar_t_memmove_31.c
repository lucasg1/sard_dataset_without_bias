void FUN0()
{
    wchar_t * data;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            wchar_t dest[50] = L"";
            memmove(dest, data, wcslen(data)*sizeof(wchar_t));
            dest[50-1] = L'\0'; 
            printWLine(data);
            free(data);
        }
    }
}

void FUN0()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    wmemset(data, L'A', 50-1); 
    data[50-1] = L'\0'; 
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
        {
            wchar_t dest[50] = L"";
            wcsncpy(dest, data, wcslen(data));
            dest[50-1] = L'\0'; 
            printWLine(data);
        }
    }
}

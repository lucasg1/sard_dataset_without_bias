void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    {
        wchar_t * data = *dataPtr1;
        wmemset(data, L'A', 50-1); 
        data[50-1] = L'\0'; 
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            wchar_t dest[50] = L"";
            SNPRINTF(dest, wcslen(data), L"%s", data);
            printWLine(data);
        }
    }
}

void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    wmemset(dataBuffer, L'A', 100-1);
    dataBuffer[100-1] = L'\0';
    {
        wchar_t * data = *dataPtr1;
        data = dataBuffer - 8;
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            wchar_t dest[100];
            wmemset(dest, L'C', 100-1); 
            dest[100-1] = L'\0'; 
<START>
            wcsncpy(dest, data, wcslen(dest));
<END>
            dest[100-1] = L'\0';
            printWLine(dest);
        }
    }
}
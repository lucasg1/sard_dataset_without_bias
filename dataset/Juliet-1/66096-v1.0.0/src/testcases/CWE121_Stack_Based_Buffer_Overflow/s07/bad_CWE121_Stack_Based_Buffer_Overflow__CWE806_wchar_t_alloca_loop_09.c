void FUN0()
{
    wchar_t * data;
    wchar_t * dataBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    data = dataBuffer;
    if(GLOBAL_CONST_TRUE)
    {
        wmemset(data, L'A', 100-1); 
        data[100-1] = L'\0'; 
    }
    {
        wchar_t dest[50] = L"";
        size_t i, dataLen;
        dataLen = wcslen(data);
        for (i = 0; i < dataLen; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[50-1] = L'\0'; 
        printWLine(data);
    }
}

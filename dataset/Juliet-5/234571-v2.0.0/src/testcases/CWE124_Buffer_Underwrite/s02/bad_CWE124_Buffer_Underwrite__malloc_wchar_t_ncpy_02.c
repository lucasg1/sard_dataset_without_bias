void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(1)
    {
        {
            wchar_t * dataBuffer = (wchar_t *)malloc(100*sizeof(wchar_t));
            if (dataBuffer == NULL) {exit(-1);}
            wmemset(dataBuffer, L'A', 100-1);
            dataBuffer[100-1] = L'\0';
            data = dataBuffer - 8;
        }
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcsncpy(data, source, 100-1);
<END>
        data[100-1] = L'\0';
        printWLine(data);
    }
}

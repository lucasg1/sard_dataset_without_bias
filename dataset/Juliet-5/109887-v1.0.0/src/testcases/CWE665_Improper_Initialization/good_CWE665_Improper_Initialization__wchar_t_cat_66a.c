void FUN0(wchar_t * dataArray[])
{
    wchar_t * data = dataArray[2];
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcscat(data, source);
        printWLine(data);
    }
}
void FUN0(wchar_t * dataArray[]);
void FUN2()
{
    wchar_t * data;
    wchar_t * dataArray[5];
    wchar_t dataBuffer[100];
    data = dataBuffer;
    data[0] = L'\0'; 
    dataArray[2] = data;
    FUN0(dataArray);
}

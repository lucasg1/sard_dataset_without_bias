void FUN0()
{
    int h;
    wchar_t * data;
    wchar_t dataBuffer[100];
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        data[0] = L'\0'; 
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcscat(data, source);
        printWLine(data);
    }
}

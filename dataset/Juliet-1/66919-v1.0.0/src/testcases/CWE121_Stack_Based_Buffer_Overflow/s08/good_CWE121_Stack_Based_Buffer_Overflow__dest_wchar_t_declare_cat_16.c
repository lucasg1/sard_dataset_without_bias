void FUN0()
{
    wchar_t * data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    while(1)
    {
        data = dataGoodBuffer;
        data[0] = L'\0'; 
        break;
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcscat(data, source);
        printWLine(data);
    }
}

void FUN0()
{
    int h;
    wchar_t * data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    for(h = 0; h < 1; h++)
    {
        data = dataGoodBuffer;
        data[0] = L'\0'; 
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        SNPRINTF(data, 100, L"%s", source);
        printWLine(data);
    }
}

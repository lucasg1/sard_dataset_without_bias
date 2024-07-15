void FUN0()
{
    wchar_t * data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = dataGoodBuffer;
        data[0] = L'\0'; 
        break;
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcscpy(data, source);
        printWLine(data);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    switch(6)
    {
    case 6:
        data = dataGoodBuffer;
        data[0] = L'\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcscpy(data, source);
        printWLine(data);
    }
}

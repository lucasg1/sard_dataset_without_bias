void FUN0()
{
    wchar_t * data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = dataGoodBuffer;
        data[0] = L'\0'; 
    }
    {
        size_t i;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = L'\0'; 
        printWLine(data);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    if(5==5)
    {
        data = dataGoodBuffer;
        data[0] = L'\0'; 
    }
    {
        size_t i;
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = L'\0'; 
        printWLine(data);
    }
}

void FUN0()
{
    wchar_t * data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    if(GLOBAL_CONST_FIVE==5)
    {
        data = dataBadBuffer;
        data[0] = L'\0'; 
    }
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcsncat(data, source, 100);
<END>
        printWLine(data);
    }
}

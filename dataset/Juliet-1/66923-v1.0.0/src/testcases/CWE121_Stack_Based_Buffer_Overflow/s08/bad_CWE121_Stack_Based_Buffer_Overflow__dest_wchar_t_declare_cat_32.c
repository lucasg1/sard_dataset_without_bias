void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    {
        wchar_t * data = *dataPtr1;
        data = dataBadBuffer;
        data[0] = L'\0'; 
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            wchar_t source[100];
            wmemset(source, L'C', 100-1); 
            source[100-1] = L'\0'; 
<START>
            wcscat(data, source);
<END>
            printWLine(data);
        }
    }
}

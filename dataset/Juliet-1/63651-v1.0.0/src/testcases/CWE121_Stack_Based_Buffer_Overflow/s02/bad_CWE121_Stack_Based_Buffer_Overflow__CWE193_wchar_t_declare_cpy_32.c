void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t dataBadBuffer[10];
    wchar_t dataGoodBuffer[10+1];
    {
        wchar_t * data = *dataPtr1;
        data = dataBadBuffer;
        data[0] = L'\0'; 
        *dataPtr1 = data;
    }
    {
        wchar_t * data = *dataPtr2;
        {
            wchar_t source[10+1] = SRC_STRING;
<START>
            wcscpy(data, source);
<END>
            printWLine(data);
        }
    }
}

void FUN0()
{
    wchar_t * data;
    wchar_t * *dataPtr1 = &data;
    wchar_t * *dataPtr2 = &data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
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
            memcpy(data, source, (wcslen(source) + 1) * sizeof(wchar_t));
<END>
            printWLine(data);
        }
    }
}

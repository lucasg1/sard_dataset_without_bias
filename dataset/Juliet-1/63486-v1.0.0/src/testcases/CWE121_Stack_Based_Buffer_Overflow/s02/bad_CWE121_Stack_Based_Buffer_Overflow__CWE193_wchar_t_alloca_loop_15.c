void FUN0()
{
    wchar_t * data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA((10)*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA((10+1)*sizeof(wchar_t));
    switch(6)
    {
    case 6:
        data = dataBadBuffer;
        data[0] = L'\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        wchar_t source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = wcslen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printWLine(data);
    }
}

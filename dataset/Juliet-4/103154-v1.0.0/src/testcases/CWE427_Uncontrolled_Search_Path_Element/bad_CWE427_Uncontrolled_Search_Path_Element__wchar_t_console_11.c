void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    if(globalReturnsTrue())
    {
        {
            size_t dataLen = wcslen(data);
            if (250-dataLen > 1)
            {
                if (fgetws(data+dataLen, (int)(250-dataLen), stdin) != NULL)
                {
                    dataLen = wcslen(data);
                    if (dataLen > 0 && data[dataLen-1] == L'\n')
                    {
                        data[dataLen-1] = L'\0';
                    }
                }
                else
                {
                    printLine("fgetws() failed");
                    data[dataLen] = L'\0';
                }
            }
        }
    }
<START>
    PUTENV(data);
<END>
}

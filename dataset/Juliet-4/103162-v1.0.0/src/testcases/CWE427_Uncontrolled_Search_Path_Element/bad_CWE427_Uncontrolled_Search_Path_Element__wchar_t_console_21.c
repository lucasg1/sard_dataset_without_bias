static int VAR0 = 0;
static wchar_t * FUN0(wchar_t * data)
{
    if(VAR0)
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
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    VAR0 = 1; 
    data = FUN0(data);
<START>
    PUTENV(data);
<END>
}

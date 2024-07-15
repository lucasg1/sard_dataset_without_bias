extern int VAR0;
wchar_t * FUN0(wchar_t * data)
{
    if(VAR0)
    {
        {
            size_t dataLen = wcslen(data);
            if (100-dataLen > 1)
            {
                if (fgetws(data+dataLen, (int)(100-dataLen), stdin) != NULL)
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
int VAR0 = 0;
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    VAR0 = 1; 
    data = FUN0(data);
    {
        FILE *pipe;
<START>
        pipe = POPEN(data, L"w");
<END>
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}

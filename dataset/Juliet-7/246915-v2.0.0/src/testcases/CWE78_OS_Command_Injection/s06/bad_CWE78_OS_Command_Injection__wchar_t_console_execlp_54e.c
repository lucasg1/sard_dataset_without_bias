void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
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
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
void FUN3(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN3(data);
}
void FUN5(wchar_t * data);
void FUN0(wchar_t * data)
{
    FUN5(data);
}
void FUN2(wchar_t * data)
{
<START>
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}

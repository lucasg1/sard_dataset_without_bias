wchar_t * FUN0(wchar_t * data)
{
    {
        size_t dataLen = wcslen(data);
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgetws(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgetws() failed");
                    data[dataLen] = L'\0';
                }
                fclose(pFile);
            }
        }
    }
    return data;
}
wchar_t * FUN0(wchar_t * data);
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    data = FUN0(data);
<START>
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}

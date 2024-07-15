void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
    data = dataBuffer;
    while(1)
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
        break;
    }
<START>
    EXECL(COMMAND_INT_PATH, COMMAND_INT_PATH, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}

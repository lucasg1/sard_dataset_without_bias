void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    if(globalFive==5)
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
    }
    if(globalFive==5)
    {
<START>
        fwprintf(stdout, data);
<END>
    }
}

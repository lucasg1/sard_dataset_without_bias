void FUN0(wchar_t * data);
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
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
    funcPtr(data);
}
void FUN0(wchar_t * data)
{
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

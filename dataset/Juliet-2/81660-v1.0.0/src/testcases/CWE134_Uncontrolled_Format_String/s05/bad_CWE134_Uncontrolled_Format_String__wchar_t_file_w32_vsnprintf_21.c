static int VAR0 = 0;
void FUN0(wchar_t * data, ...)
{
    if(VAR0)
    {
        {
            wchar_t dest[100] = L"";
            va_list args;
            va_start(args, data);
<START>
            _vsnwprintf(dest, 100-1, data, args);
<END>
            va_end(args);
            printWLine(dest);
        }
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
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
    VAR0 = 1; 
    FUN0(data, data);
}

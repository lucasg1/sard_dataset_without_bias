void FUN0(wchar_t * data)
{
    fwprintf(stdout, data);
}
void FUN1()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN0;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    funcPtr(data);
}
void FUN2(wchar_t * data)
{
    fwprintf(stdout, L"%s\n", data);
}
void FUN3()
{
    wchar_t * data;
    void (*funcPtr) (wchar_t *) = FUN2;
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
    funcPtr(data);
}

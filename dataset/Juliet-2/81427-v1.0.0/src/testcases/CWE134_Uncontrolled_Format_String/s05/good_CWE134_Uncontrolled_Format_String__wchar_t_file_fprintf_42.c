static wchar_t * FUN0(wchar_t * data)
{
    wcscpy(data, L"fixedstringtest");
    return data;
}
void FUN1()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    data = FUN0(data);
    fwprintf(stdout, data);
}
static wchar_t * FUN2(wchar_t * data)
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
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    data = FUN2(data);
    fwprintf(stdout, L"%s\n", data);
}

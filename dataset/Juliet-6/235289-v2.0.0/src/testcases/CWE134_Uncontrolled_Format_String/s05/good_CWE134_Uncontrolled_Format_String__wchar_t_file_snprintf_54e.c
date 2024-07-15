void FUN0(wchar_t * data);
void FUN1(wchar_t * data)
{
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3(wchar_t * data)
{
    FUN2(data);
}
void FUN1(wchar_t * data);
void FUN5(wchar_t * data)
{
    FUN1(data);
}
void FUN3(wchar_t * data);
void FUN7(wchar_t * data)
{
    FUN3(data);
}
void FUN8(wchar_t * data);
void FUN9()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    FUN8(data);
}
void FUN10(wchar_t * data);
void FUN11()
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
    FUN10(data);
}
void FUN5(wchar_t * data);
void FUN8(wchar_t * data)
{
    FUN5(data);
}
void FUN7(wchar_t * data);
void FUN10(wchar_t * data)
{
    FUN7(data);
}
void FUN0(wchar_t * data)
{
    {
        wchar_t dest[100] = L"";
        SNPRINTF(dest, 100-1, data);
        printWLine(dest);
    }
}
void FUN2(wchar_t * data)
{
    {
        wchar_t dest[100] = L"";
        SNPRINTF(dest, 100-1, L"%s", data);
        printWLine(dest);
    }
}

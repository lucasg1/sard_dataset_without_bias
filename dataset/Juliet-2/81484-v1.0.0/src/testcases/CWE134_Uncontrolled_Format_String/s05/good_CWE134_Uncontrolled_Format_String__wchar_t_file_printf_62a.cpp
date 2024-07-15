namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscpy(data, L"fixedstringtest");
}
void FUN1(wchar_t * &data)
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
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN3()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    FUN0(data);
    wprintf(data);
}
void FUN1(wchar_t * &data);
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    FUN1(data);
    wprintf(L"%s\n", data);
}
} 

int VAR0 = 0;
int VAR1 = 0;
int VAR2 = 0;
void FUN0(wchar_t * data);
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
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(wchar_t * data);
void FUN3()
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
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(wchar_t * data);
void FUN5()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, L"fixedstringtest");
    VAR2 = 1; 
    FUN4(data);
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0(wchar_t * data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, L"%s", data);
            printWLine(dest);
        }
    }
}
void FUN2(wchar_t * data)
{
    if(VAR1)
    {
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, L"%s", data);
            printWLine(dest);
        }
    }
}
void FUN4(wchar_t * data)
{
    if(VAR2)
    {
        {
            wchar_t dest[100] = L"";
            SNPRINTF(dest, 100-1, data);
            printWLine(dest);
        }
    }
}

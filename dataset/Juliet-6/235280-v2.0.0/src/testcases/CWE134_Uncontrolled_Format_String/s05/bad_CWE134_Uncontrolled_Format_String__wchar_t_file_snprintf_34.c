typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE134_Uncontrolled_Format_String__wchar_t_file_snprintf_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE134_Uncontrolled_Format_String__wchar_t_file_snprintf_34_unionType myUnion;
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
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            wchar_t dest[100] = L"";
<START>
            SNPRINTF(dest, 100-1, data);
<END>
            printWLine(dest);
        }
    }
}

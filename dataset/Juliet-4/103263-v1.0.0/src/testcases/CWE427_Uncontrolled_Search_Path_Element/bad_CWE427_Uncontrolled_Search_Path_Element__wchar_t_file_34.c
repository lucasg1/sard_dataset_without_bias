typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_34_unionType myUnion;
    wchar_t dataBuffer[250] = L"PATH=";
    data = dataBuffer;
    {
        size_t dataLen = wcslen(data);
        FILE * pFile;
        if (250-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgetws(data+dataLen, (int)(250-dataLen), pFile) == NULL)
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
<START>
        PUTENV(data);
<END>
    }
}

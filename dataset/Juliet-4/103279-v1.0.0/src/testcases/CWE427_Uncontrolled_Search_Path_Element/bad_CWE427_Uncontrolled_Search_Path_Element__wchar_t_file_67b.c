typedef struct _CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_67_structType
{
    wchar_t * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_67_structType myStruct;
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
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_67_structType
{
    wchar_t * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__wchar_t_file_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
<START>
    PUTENV(data);
<END>
}

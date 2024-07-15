typedef struct _CWE427_Uncontrolled_Search_Path_Element__char_file_67_structType
{
    char * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__char_file_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__char_file_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE427_Uncontrolled_Search_Path_Element__char_file_67_structType myStruct;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        FILE * pFile;
        if (250-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgets(data+dataLen, (int)(250-dataLen), pFile) == NULL)
                {
                    printLine("fgets() failed");
                    data[dataLen] = '\0';
                }
                fclose(pFile);
            }
        }
    }
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE427_Uncontrolled_Search_Path_Element__char_file_67_structType
{
    char * structFirst;
} CWE427_Uncontrolled_Search_Path_Element__char_file_67_structType;
void FUN0(CWE427_Uncontrolled_Search_Path_Element__char_file_67_structType myStruct)
{
    char * data = myStruct.structFirst;
<START>
    PUTENV(data);
<END>
}

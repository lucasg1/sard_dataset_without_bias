typedef struct _CWE134_Uncontrolled_Format_String__char_file_vfprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_file_vfprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__char_file_vfprintf_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_file_vfprintf_67_structType myStruct;
    char dataBuffer[100] = "";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgets(data+dataLen, (int)(100-dataLen), pFile) == NULL)
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
typedef struct _CWE134_Uncontrolled_Format_String__char_file_vfprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_file_vfprintf_67_structType;
void FUN2(char * data, ...)
{
    {
        va_list args;
        va_start(args, data);
<START>
        vfprintf(stdout, data, args);
<END>
        va_end(args);
    }
}
void FUN0(CWE134_Uncontrolled_Format_String__char_file_vfprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    FUN2(data, data);
}

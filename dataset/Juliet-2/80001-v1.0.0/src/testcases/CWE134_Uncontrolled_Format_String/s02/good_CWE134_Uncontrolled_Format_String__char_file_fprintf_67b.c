typedef struct _CWE134_Uncontrolled_Format_String__char_file_fprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_file_fprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__char_file_fprintf_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_file_fprintf_67_structType myStruct;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, "fixedstringtest");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
void FUN2(CWE134_Uncontrolled_Format_String__char_file_fprintf_67_structType myStruct);
void FUN3()
{
    char * data;
    CWE134_Uncontrolled_Format_String__char_file_fprintf_67_structType myStruct;
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
    FUN2(myStruct);
}
typedef struct _CWE134_Uncontrolled_Format_String__char_file_fprintf_67_structType
{
    char * structFirst;
} CWE134_Uncontrolled_Format_String__char_file_fprintf_67_structType;
void FUN0(CWE134_Uncontrolled_Format_String__char_file_fprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    fprintf(stdout, data);
}
void FUN2(CWE134_Uncontrolled_Format_String__char_file_fprintf_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    fprintf(stdout, "%s\n", data);
}

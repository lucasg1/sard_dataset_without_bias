typedef struct _CWE78_OS_Command_Injection__char_file_system_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_file_system_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_file_system_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE78_OS_Command_Injection__char_file_system_67_structType myStruct;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
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
typedef struct _CWE78_OS_Command_Injection__char_file_system_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_file_system_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_file_system_67_structType myStruct)
{
    char * data = myStruct.structFirst;
<START>
    if (SYSTEM(data) != 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}

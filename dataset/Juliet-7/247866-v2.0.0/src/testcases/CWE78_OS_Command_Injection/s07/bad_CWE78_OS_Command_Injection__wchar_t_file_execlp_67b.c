typedef struct _CWE78_OS_Command_Injection__wchar_t_file_execlp_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_file_execlp_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_file_execlp_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_file_execlp_67_structType myStruct;
    wchar_t dataBuffer[100] = COMMAND_ARG2;
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
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__wchar_t_file_execlp_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_file_execlp_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_file_execlp_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
<START>
    EXECLP(COMMAND_INT, COMMAND_INT, COMMAND_ARG1, COMMAND_ARG3, NULL);
<END>
}

typedef struct _CWE78_OS_Command_Injection__wchar_t_file_popen_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_file_popen_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_file_popen_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_file_popen_67_structType myStruct;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
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
typedef struct _CWE78_OS_Command_Injection__wchar_t_file_popen_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_file_popen_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_file_popen_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        FILE *pipe;
<START>
        pipe = POPEN(data, L"w");
<END>
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}

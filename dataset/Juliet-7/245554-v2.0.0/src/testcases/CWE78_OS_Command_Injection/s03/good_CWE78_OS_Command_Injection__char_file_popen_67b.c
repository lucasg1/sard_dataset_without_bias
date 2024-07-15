typedef struct _CWE78_OS_Command_Injection__char_file_popen_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_file_popen_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_file_popen_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE78_OS_Command_Injection__char_file_popen_67_structType myStruct;
    char data_buf[100] = FULL_COMMAND;
    data = data_buf;
    strcat(data, "*.*");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__char_file_popen_67_structType
{
    char * structFirst;
} CWE78_OS_Command_Injection__char_file_popen_67_structType;
void FUN0(CWE78_OS_Command_Injection__char_file_popen_67_structType myStruct)
{
    char * data = myStruct.structFirst;
    {
        FILE *pipe;
        pipe = POPEN(data, "w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}

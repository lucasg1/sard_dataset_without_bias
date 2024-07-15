typedef struct _CWE78_OS_Command_Injection__wchar_t_listen_socket_popen_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_listen_socket_popen_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_listen_socket_popen_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_listen_socket_popen_67_structType myStruct;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__wchar_t_listen_socket_popen_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_listen_socket_popen_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_listen_socket_popen_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        FILE *pipe;
        pipe = POPEN(data, L"w");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}

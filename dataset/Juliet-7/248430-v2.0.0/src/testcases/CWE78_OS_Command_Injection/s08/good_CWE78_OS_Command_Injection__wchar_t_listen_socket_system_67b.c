typedef struct _CWE78_OS_Command_Injection__wchar_t_listen_socket_system_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_listen_socket_system_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_listen_socket_system_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE78_OS_Command_Injection__wchar_t_listen_socket_system_67_structType myStruct;
    wchar_t data_buf[100] = FULL_COMMAND;
    data = data_buf;
    wcscat(data, L"*.*");
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE78_OS_Command_Injection__wchar_t_listen_socket_system_67_structType
{
    wchar_t * structFirst;
} CWE78_OS_Command_Injection__wchar_t_listen_socket_system_67_structType;
void FUN0(CWE78_OS_Command_Injection__wchar_t_listen_socket_system_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    if (SYSTEM(data) != 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

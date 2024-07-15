typedef struct _CWE426_Untrusted_Search_Path__wchar_t_system_67_structType
{
    wchar_t * structFirst;
} CWE426_Untrusted_Search_Path__wchar_t_system_67_structType;
void FUN0(CWE426_Untrusted_Search_Path__wchar_t_system_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE426_Untrusted_Search_Path__wchar_t_system_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, GOOD_OS_COMMAND);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE426_Untrusted_Search_Path__wchar_t_system_67_structType
{
    wchar_t * structFirst;
} CWE426_Untrusted_Search_Path__wchar_t_system_67_structType;
void FUN0(CWE426_Untrusted_Search_Path__wchar_t_system_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    if (SYSTEM(data) <= 0)
    {
        printLine("command execution failed!");
        exit(1);
    }
}

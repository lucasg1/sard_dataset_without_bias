typedef struct _CWE426_Untrusted_Search_Path__wchar_t_popen_67_structType
{
    wchar_t * structFirst;
} CWE426_Untrusted_Search_Path__wchar_t_popen_67_structType;
void FUN0(CWE426_Untrusted_Search_Path__wchar_t_popen_67_structType myStruct);
void FUN1()
{
    wchar_t * data;
    CWE426_Untrusted_Search_Path__wchar_t_popen_67_structType myStruct;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, GOOD_OS_COMMAND);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE426_Untrusted_Search_Path__wchar_t_popen_67_structType
{
    wchar_t * structFirst;
} CWE426_Untrusted_Search_Path__wchar_t_popen_67_structType;
void FUN0(CWE426_Untrusted_Search_Path__wchar_t_popen_67_structType myStruct)
{
    wchar_t * data = myStruct.structFirst;
    {
        FILE *pipe;
        pipe = POPEN(data, L"wb");
        if (pipe != NULL)
        {
            PCLOSE(pipe);
        }
    }
}

typedef struct _CWE426_Untrusted_Search_Path__char_system_67_structType
{
    char * structFirst;
} CWE426_Untrusted_Search_Path__char_system_67_structType;
void FUN0(CWE426_Untrusted_Search_Path__char_system_67_structType myStruct);
void FUN1()
{
    char * data;
    CWE426_Untrusted_Search_Path__char_system_67_structType myStruct;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, BAD_OS_COMMAND);
    myStruct.structFirst = data;
    FUN0(myStruct);
}
typedef struct _CWE426_Untrusted_Search_Path__char_system_67_structType
{
    char * structFirst;
} CWE426_Untrusted_Search_Path__char_system_67_structType;
void FUN0(CWE426_Untrusted_Search_Path__char_system_67_structType myStruct)
{
    char * data = myStruct.structFirst;
<START>
    if (SYSTEM(data) <= 0)
<END>
    {
        printLine("command execution failed!");
        exit(1);
    }
}

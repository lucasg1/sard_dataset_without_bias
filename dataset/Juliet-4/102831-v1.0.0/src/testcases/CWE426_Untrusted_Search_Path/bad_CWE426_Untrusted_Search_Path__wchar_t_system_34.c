typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE426_Untrusted_Search_Path__wchar_t_system_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE426_Untrusted_Search_Path__wchar_t_system_34_unionType myUnion;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    wcscpy(data, BAD_OS_COMMAND);
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
<START>
        if (SYSTEM(data) <= 0)
<END>
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}

typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE426_Untrusted_Search_Path__char_system_34_unionType;
void FUN0()
{
    char * data;
    CWE426_Untrusted_Search_Path__char_system_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, BAD_OS_COMMAND);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
<START>
        if (SYSTEM(data) <= 0)
<END>
        {
            printLine("command execution failed!");
            exit(1);
        }
    }
}

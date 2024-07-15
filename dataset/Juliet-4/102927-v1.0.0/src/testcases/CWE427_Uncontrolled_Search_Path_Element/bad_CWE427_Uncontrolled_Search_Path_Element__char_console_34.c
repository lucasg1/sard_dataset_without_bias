typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE427_Uncontrolled_Search_Path_Element__char_console_34_unionType;
void FUN0()
{
    char * data;
    CWE427_Uncontrolled_Search_Path_Element__char_console_34_unionType myUnion;
    char dataBuffer[250] = "PATH=";
    data = dataBuffer;
    {
        size_t dataLen = strlen(data);
        if (250-dataLen > 1)
        {
            if (fgets(data+dataLen, (int)(250-dataLen), stdin) != NULL)
            {
                dataLen = strlen(data);
                if (dataLen > 0 && data[dataLen-1] == '\n')
                {
                    data[dataLen-1] = '\0';
                }
            }
            else
            {
                printLine("fgets() failed");
                data[dataLen] = '\0';
            }
        }
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
<START>
        PUTENV(data);
<END>
    }
}

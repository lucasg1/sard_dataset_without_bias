typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE426_Untrusted_Search_Path__char_popen_34_unionType;
void FUN0()
{
    char * data;
    CWE426_Untrusted_Search_Path__char_popen_34_unionType myUnion;
    char dataBuffer[100] = "";
    data = dataBuffer;
    strcpy(data, GOOD_OS_COMMAND);
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            FILE *pipe;
            pipe = POPEN(data, "wb");
            if (pipe != NULL)
            {
                PCLOSE(pipe);
            }
        }
    }
}

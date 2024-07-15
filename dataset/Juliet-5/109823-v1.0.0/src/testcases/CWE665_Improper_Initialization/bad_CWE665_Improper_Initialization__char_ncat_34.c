typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE665_Improper_Initialization__char_ncat_34_unionType;
void FUN0()
{
    char * data;
    CWE665_Improper_Initialization__char_ncat_34_unionType myUnion;
    char dataBuffer[100];
    data = dataBuffer;
<START>
<END>
    ; 
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            size_t sourceLen;
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
            sourceLen = strlen(source);
            strncat(data, source, sourceLen);
            printLine(data);
        }
    }
}

void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    goto source;
source:
<START>
<END>
    ; 
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

void FUN0()
{
    int i;
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    for(i = 0; i < 1; i++)
    {
<START>
<END>
        ; 
    }
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

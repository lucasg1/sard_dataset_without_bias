void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
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
void FUN0(char * * dataPtr);
void FUN2()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
<START>
<END>
    ; 
    FUN0(&data);
}

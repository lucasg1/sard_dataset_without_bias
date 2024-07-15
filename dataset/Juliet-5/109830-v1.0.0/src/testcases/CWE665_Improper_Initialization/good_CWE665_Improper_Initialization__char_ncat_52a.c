void FUN0(char * data)
{
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
void FUN0(char * data);
void FUN2(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN4()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    data[0] = '\0'; 
    FUN2(data);
}

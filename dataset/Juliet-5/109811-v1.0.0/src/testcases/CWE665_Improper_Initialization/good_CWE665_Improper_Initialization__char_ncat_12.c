void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    if(globalReturnsTrueOrFalse())
    {
        data[0] = '\0'; 
    }
    else
    {
        data[0] = '\0'; 
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

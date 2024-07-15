void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
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
void FUN0(char * dataArray[]);
void FUN2()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[100];
    data = dataBuffer;
    data[0] = '\0'; 
    dataArray[2] = data;
    FUN0(dataArray);
}

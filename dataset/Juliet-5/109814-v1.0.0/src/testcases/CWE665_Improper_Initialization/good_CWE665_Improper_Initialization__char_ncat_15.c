void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data[0] = '\0'; 
        break;
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
void FUN1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    switch(6)
    {
    case 6:
        data[0] = '\0'; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
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

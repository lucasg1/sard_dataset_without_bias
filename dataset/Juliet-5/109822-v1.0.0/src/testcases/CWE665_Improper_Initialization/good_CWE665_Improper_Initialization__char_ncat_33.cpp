namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    char dataBuffer[100];
    data = dataBuffer;
    data[0] = '\0'; 
    {
        char * data = dataRef;
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
} 

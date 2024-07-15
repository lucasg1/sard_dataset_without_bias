namespace NAMESPACE0
{
void FUN0(char * &data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    FUN0(data);
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

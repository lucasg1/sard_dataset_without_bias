void FUN0(char * data)
{
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        memcpy(data, source, 100*sizeof(char));
        data[100-1] = '\0';
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer;
    funcPtr(data);
}

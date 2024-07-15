void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
void FUN0(void * dataVoidPtr);
void FUN2()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    data[0] = '\0'; 
    FUN0(&data);
}

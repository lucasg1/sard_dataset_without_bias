void FUN0(void * dataVoidPtr);
void FUN1()
{
    char * data;
    data = NULL; 
    {
        static char dataBuffer[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    char * * dataPtr = (char * *)dataVoidPtr;
    char * data = (*dataPtr);
    printLine(data);
<START>
    free(data);
<END>
}

void FUN0(char * data);
void FUN1()
{
    char * data;
    data = NULL; 
    {
        char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    FUN0(data);
}
void FUN0(char * data)
{
    printLine(data);
<START>
    free(data);
<END>
}

void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    data = NULL;
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer - 8;
    }
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        memcpy(data, source, 100*sizeof(char));
<END>
        data[100-1] = '\0';
        printLine(data);
    }
}

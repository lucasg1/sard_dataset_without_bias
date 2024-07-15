void FUN0(char * * dataPtr);
void FUN1()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer - 8;
    FUN0(&data);
}
void FUN0(char * * dataPtr)
{
    char * data = *dataPtr;
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
<START>
        strncpy(dest, data, strlen(dest));
<END>
        dest[100-1] = '\0';
        printLine(dest);
    }
}

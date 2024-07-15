void FUN0()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = dataBuffer;
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        memcpy(dest, data, 100*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}
void FUN1()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    if(globalReturnsTrue())
    {
        data = dataBuffer;
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        memcpy(dest, data, 100*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}

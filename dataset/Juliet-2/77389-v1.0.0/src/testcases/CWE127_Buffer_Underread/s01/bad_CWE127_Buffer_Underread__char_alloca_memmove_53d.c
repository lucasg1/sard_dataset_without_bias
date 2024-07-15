void FUN0(char * data);
void FUN1()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer - 8;
    FUN0(data);
}
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
void FUN4(char * data);
void FUN2(char * data)
{
    FUN4(data);
}
void FUN4(char * data)
{
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
<START>
        memmove(dest, data, 100*sizeof(char));
<END>
        dest[100-1] = '\0';
        printLine(dest);
    }
}

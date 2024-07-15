void FUN0(char * dataArray[])
{
    char * data = dataArray[2];
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
void FUN0(char * dataArray[]);
void FUN2()
{
    char * data;
    char * dataArray[5];
    char dataBuffer[100];
    data = dataBuffer;
<START>
<END>
    ; 
    dataArray[2] = data;
    FUN0(dataArray);
}

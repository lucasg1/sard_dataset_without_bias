static char * FUN0(char * data)
{
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer - 8;
    }
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    data = FUN0(data);
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

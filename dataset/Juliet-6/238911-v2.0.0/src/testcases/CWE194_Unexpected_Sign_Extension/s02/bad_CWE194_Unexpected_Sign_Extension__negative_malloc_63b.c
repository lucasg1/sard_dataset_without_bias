void FUN0(short * dataPtr);
void FUN1()
{
    short data;
    data = 0;
    data = -1;
    FUN0(&data);
}
void FUN0(short * dataPtr)
{
    short data = *dataPtr;
    if (data < 100)
    {
<START>
        char * dataBuffer = (char *)malloc(data);
<END>
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}

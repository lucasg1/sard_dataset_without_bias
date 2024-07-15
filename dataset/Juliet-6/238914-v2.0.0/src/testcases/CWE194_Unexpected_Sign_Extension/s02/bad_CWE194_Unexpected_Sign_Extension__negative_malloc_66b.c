void FUN0(short dataArray[]);
void FUN1()
{
    short data;
    short dataArray[5];
    data = 0;
    data = -1;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(short dataArray[])
{
    short data = dataArray[2];
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

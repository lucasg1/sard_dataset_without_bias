void FUN0(int dataArray[]);
void FUN1()
{
    int data;
    int dataArray[5];
    data = -1;
    data = 100-1;
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(int dataArray[])
{
    int data = dataArray[2];
    if (data < 100)
    {
        char * dataBuffer = (char *)malloc(data);
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}

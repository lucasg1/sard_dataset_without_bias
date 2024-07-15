void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrueOrFalse())
    {
        data = -1;
    }
    else
    {
        data = 100-1;
    }
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

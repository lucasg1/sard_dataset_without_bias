void FUN0()
{
    short data;
    data = 0;
    while(1)
    {
        data = 100-1;
        break;
    }
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

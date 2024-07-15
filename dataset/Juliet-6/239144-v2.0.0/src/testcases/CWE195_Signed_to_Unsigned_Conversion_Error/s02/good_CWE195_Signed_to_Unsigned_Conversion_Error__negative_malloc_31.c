void FUN0()
{
    int data;
    data = -1;
    data = 100-1;
    {
        int dataCopy = data;
        int data = dataCopy;
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
}

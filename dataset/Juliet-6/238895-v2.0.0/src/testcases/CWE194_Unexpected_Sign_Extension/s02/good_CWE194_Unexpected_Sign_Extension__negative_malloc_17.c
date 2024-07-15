void FUN0()
{
    int h;
    short data;
    data = 0;
    for(h = 0; h < 1; h++)
    {
        data = 100-1;
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

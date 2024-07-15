void FUN0()
{
    int data;
    data = -1;
    switch(6)
    {
    case 6:
        data = -1;
        break;
    default:
        printLine("Benign, fixed string");
        break;
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

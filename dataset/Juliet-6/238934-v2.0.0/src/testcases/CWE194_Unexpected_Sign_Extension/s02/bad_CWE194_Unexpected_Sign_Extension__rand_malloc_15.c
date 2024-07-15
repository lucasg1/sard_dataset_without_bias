void FUN0()
{
    short data;
    data = 0;
    switch(6)
    {
    case 6:
        data = (short)RAND32();
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

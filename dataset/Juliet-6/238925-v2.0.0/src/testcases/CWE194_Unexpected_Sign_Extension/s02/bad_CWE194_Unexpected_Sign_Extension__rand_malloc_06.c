static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    short data;
    data = 0;
    if(STATIC_CONST_FIVE==5)
    {
        data = (short)RAND32();
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

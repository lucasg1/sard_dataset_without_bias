void FUN0(int data)
{
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
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = -1;
    data = RAND32();
    funcPtr(data);
}

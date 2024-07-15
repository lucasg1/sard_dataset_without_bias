void FUN0(int data);
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = -1;
    data = 100-1;
    funcPtr(data);
}
void FUN0(int data)
{
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

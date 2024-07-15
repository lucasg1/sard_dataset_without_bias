namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 100-1;
}
void FUN1()
{
    int data;
    data = -1;
    FUN0(data);
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

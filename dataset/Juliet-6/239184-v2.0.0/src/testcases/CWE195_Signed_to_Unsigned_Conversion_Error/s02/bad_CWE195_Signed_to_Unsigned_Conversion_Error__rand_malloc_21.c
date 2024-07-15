static int VAR0 = 0;
static int FUN0(int data)
{
    if(VAR0)
    {
        data = RAND32();
    }
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    VAR0 = 1; 
    data = FUN0(data);
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

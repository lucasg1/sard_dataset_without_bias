static int VAR0;
static int VAR1;
void FUN0()
{
    int data = VAR1;
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
void FUN1()
{
    int data;
    data = -1;
    data = 100-1;
    VAR1 = data;
    FUN0();
}

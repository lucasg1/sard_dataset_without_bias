static int VAR0 = 0;
static int VAR1 = 0;
static int FUN0(int data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = 100-1;
    }
    return data;
}
void FUN1()
{
    int data;
    data = -1;
    VAR0 = 0; 
    data = FUN0(data);
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
static int FUN2(int data)
{
    if(VAR1)
    {
        data = 100-1;
    }
    return data;
}
void FUN3()
{
    int data;
    data = -1;
    VAR1 = 1; 
    data = FUN2(data);
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

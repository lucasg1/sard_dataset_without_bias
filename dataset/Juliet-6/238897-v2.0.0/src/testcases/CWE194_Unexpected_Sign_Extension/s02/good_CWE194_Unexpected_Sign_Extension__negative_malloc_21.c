static int VAR0 = 0;
static int VAR1 = 0;
static short FUN0(short data)
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
    short data;
    data = 0;
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
static short FUN2(short data)
{
    if(VAR1)
    {
        data = 100-1;
    }
    return data;
}
void FUN3()
{
    short data;
    data = 0;
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

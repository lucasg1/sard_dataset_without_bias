extern int VAR0;
short FUN0(short data)
{
    if(VAR0)
    {
        data = (short)RAND32();
    }
    return data;
}
int VAR0 = 0;
short FUN0(short data);
void FUN2()
{
    short data;
    data = 0;
    VAR0 = 1; 
    data = FUN0(data);
    if (data < 100)
    {
<START>
        char * dataBuffer = (char *)malloc(data);
<END>
        memset(dataBuffer, 'A', data-1);
        dataBuffer[data-1] = '\0';
        printLine(dataBuffer);
        free(dataBuffer);
    }
}

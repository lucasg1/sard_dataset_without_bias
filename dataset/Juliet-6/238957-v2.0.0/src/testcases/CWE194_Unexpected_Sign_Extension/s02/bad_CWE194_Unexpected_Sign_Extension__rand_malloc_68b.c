short VAR0;
short VAR1;
void FUN0();
void FUN1()
{
    short data;
    data = 0;
    data = (short)RAND32();
    VAR0 = data;
    FUN0();
}
extern short VAR0;
extern short VAR1;
void FUN0()
{
    short data = VAR0;
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

short VAR0;
short VAR1;
void FUN0();
void FUN1()
{
    short data;
    data = 0;
    data = 100-1;
    VAR1 = data;
    FUN0();
}
extern short VAR0;
extern short VAR1;
void FUN0()
{
    short data = VAR1;
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

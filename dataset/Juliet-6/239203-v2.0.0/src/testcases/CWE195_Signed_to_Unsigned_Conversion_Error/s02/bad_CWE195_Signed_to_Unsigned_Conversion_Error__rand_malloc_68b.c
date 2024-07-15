int VAR0;
int VAR1;
void FUN0();
void FUN1()
{
    int data;
    data = -1;
    data = RAND32();
    VAR0 = data;
    FUN0();
}
extern int VAR0;
extern int VAR1;
void FUN0()
{
    int data = VAR0;
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

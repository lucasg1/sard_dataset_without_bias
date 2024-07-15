void FUN0(short data);
void FUN1(short data)
{
    FUN0(data);
}
void FUN2(short data);
void FUN3(short data)
{
    FUN2(data);
}
void FUN1(short data);
void FUN5()
{
    short data;
    data = 0;
    data = -1;
    FUN1(data);
}
void FUN3(short data);
void FUN0(short data)
{
    FUN3(data);
}
void FUN2(short data)
{
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

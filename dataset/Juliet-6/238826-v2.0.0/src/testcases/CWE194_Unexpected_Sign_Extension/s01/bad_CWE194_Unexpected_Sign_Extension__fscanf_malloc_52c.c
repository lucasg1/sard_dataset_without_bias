void FUN0(short data);
void FUN1(short data)
{
    FUN0(data);
}
void FUN1(short data);
void FUN3()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    FUN1(data);
}
void FUN0(short data)
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

static short FUN0(short data)
{
    fscanf (stdin, "%hd", &data);
    return data;
}
void FUN1()
{
    short data;
    data = 0;
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

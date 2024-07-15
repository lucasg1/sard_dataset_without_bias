namespace NAMESPACE0
{
void FUN0()
{
    short data;
    short &dataRef = data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    {
        short data = dataRef;
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
}
} 

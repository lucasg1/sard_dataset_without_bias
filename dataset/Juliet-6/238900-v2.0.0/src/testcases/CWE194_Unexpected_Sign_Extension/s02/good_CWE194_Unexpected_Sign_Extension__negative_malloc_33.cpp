namespace NAMESPACE0
{
void FUN0()
{
    short data;
    short &dataRef = data;
    data = 0;
    data = 100-1;
    {
        short data = dataRef;
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
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = 100-1;
    {
        int data = dataRef;
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

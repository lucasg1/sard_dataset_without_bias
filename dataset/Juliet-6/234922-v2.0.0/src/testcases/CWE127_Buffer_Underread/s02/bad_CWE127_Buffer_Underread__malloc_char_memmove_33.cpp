namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    char * &dataRef = data;
    data = NULL;
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer - 8;
    }
    {
        char * data = dataRef;
        {
            char dest[100];
            memset(dest, 'C', 100-1); 
            dest[100-1] = '\0'; 
<START>
            memmove(dest, data, 100*sizeof(char));
<END>
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}
} 

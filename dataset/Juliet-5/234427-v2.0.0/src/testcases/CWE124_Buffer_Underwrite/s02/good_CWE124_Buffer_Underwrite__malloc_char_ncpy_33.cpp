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
        data = dataBuffer;
    }
    {
        char * data = dataRef;
        {
            char source[100];
            memset(source, 'C', 100-1); 
            source[100-1] = '\0'; 
            strncpy(data, source, 100-1);
            data[100-1] = '\0';
            printLine(data);
        }
    }
}
} 

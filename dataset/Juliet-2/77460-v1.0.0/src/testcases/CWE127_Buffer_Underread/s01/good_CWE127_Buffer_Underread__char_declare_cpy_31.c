void FUN0()
{
    char * data;
    char dataBuffer[100];
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer;
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char dest[100*2];
            memset(dest, 'C', 100*2-1); 
            dest[100*2-1] = '\0'; 
            strcpy(dest, data);
            printLine(dest);
        }
    }
}

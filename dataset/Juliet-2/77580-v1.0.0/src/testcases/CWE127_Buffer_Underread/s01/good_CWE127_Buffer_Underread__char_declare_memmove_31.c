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
            char dest[100];
            memset(dest, 'C', 100-1); 
            dest[100-1] = '\0'; 
            memmove(dest, data, 100*sizeof(char));
            dest[100-1] = '\0';
            printLine(dest);
        }
    }
}

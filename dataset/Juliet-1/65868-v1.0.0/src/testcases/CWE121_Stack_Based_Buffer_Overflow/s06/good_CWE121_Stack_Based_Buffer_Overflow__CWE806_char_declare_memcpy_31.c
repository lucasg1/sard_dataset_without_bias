void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char dest[50] = "";
            memcpy(dest, data, strlen(data)*sizeof(char));
            dest[50-1] = '\0'; 
            printLine(data);
        }
    }
}

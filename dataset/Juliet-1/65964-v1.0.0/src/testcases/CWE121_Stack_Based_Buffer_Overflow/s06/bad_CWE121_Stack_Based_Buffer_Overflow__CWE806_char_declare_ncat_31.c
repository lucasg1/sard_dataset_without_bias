void FUN0()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    memset(data, 'A', 100-1); 
    data[100-1] = '\0'; 
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char dest[50] = "";
<START>
            strncat(dest, data, strlen(data));
<END>
            dest[50-1] = '\0'; 
            printLine(data);
        }
    }
}

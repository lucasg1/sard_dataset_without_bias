void FUN0()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    {
        char * dataCopy = data;
        char * data = dataCopy;
        {
            char dest[50] = "";
            strcpy(dest, data);
            printLine(data);
        }
    }
}

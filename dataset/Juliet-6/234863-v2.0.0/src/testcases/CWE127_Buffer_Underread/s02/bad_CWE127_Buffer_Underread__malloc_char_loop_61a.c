char * FUN0(char * data)
{
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        if (dataBuffer == NULL) {exit(-1);}
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer - 8;
    }
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    data = NULL;
    data = FUN0(data);
    {
        size_t i;
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = '\0';
        printLine(dest);
    }
}

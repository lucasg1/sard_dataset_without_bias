void FUN0()
{
    int h;
    char * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        {
            char * dataBuffer = (char *)malloc(100*sizeof(char));
            if (dataBuffer == NULL) {exit(-1);}
            memset(dataBuffer, 'A', 100-1);
            dataBuffer[100-1] = '\0';
            data = dataBuffer;
        }
    }
    {
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        memmove(dest, data, 100*sizeof(char));
        dest[100-1] = '\0';
        printLine(dest);
    }
}

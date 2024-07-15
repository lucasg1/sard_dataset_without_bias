static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    char * data;
    data = NULL;
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
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
        size_t i;
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = '\0';
        printLine(dest);
    }
}
void FUN3()
{
    char * data;
    data = NULL;
    if(FUN0())
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
        size_t i;
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = '\0';
        printLine(dest);
    }
}

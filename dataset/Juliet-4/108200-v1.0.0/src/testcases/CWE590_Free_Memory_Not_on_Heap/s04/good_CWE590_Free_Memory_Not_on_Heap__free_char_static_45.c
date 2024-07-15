static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    printLine(data);
    free(data);
}
void FUN1()
{
    char * data;
    data = NULL; 
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        if (dataBuffer == NULL)
        {
            printLine("malloc() failed");
            exit(1);
        }
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}

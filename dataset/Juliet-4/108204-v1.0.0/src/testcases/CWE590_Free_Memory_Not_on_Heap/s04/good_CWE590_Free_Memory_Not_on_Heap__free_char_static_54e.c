void FUN0(char * data);
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
    FUN0(data);
}
void FUN3(char * data);
void FUN4(char * data)
{
    FUN3(data);
}
void FUN5(char * data);
void FUN0(char * data)
{
    FUN5(data);
}
void FUN4(char * data);
void FUN5(char * data)
{
    FUN4(data);
}
void FUN3(char * data)
{
    printLine(data);
    free(data);
}

void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN1(char * data);
void FUN3(char * data)
{
    FUN1(data);
}
void FUN3(char * data);
void FUN5()
{
    char * data;
    data = NULL; 
    {
        char dataBuffer[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    FUN3(data);
}
void FUN0(char * data)
{
    printLine(data);
<START>
    free(data);
<END>
}

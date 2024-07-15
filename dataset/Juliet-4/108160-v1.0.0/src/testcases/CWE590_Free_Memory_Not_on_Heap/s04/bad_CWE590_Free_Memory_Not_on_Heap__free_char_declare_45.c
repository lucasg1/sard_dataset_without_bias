static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR0;
    printLine(data);
<START>
    free(data);
<END>
}
void FUN1()
{
    char * data;
    data = NULL; 
    {
        char dataBuffer[100];
        memset(dataBuffer, 'A', 100-1); 
        dataBuffer[100-1] = '\0'; 
        data = dataBuffer;
    }
    VAR0 = data;
    FUN0();
}

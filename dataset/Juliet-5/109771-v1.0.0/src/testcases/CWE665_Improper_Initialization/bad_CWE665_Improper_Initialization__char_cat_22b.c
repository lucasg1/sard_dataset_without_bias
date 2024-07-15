int VAR0 = 0;
char * FUN0(char * data);
void FUN1()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
    VAR0 = 1; 
    data = FUN0(data);
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
extern int VAR0;
char * FUN0(char * data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
    return data;
}

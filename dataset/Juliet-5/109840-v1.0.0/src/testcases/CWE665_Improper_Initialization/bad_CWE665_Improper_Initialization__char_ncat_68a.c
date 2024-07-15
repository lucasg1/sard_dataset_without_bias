extern char * VAR0;
extern char * VAR1;
void FUN0()
{
    char * data = VAR0;
    {
        size_t sourceLen;
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        sourceLen = strlen(source);
        strncat(data, source, sourceLen);
        printLine(data);
    }
}
char * VAR0;
char * VAR1;
void FUN0();
void FUN2()
{
    char * data;
    char dataBuffer[100];
    data = dataBuffer;
<START>
<END>
    ; 
    VAR0 = data;
    FUN0();
}

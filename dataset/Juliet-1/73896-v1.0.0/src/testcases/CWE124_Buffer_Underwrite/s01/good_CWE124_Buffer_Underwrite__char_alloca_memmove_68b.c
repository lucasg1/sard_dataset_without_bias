char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    memset(dataBuffer, 'A', 100-1);
    dataBuffer[100-1] = '\0';
    data = dataBuffer;
    VAR1 = data;
    FUN0();
}
extern char * VAR0;
extern char * VAR1;
void FUN0()
{
    char * data = VAR1;
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        memmove(data, source, 100*sizeof(char));
        data[100-1] = '\0';
        printLine(data);
    }
}

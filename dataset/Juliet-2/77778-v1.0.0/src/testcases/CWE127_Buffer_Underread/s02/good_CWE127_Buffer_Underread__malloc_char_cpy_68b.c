char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    data = NULL;
    {
        char * dataBuffer = (char *)malloc(100*sizeof(char));
        memset(dataBuffer, 'A', 100-1);
        dataBuffer[100-1] = '\0';
        data = dataBuffer;
    }
    VAR1 = data;
    FUN0();
}
extern char * VAR0;
extern char * VAR1;
void FUN0()
{
    char * data = VAR1;
    {
        char dest[100*2];
        memset(dest, 'C', 100*2-1); 
        dest[100*2-1] = '\0'; 
        strcpy(dest, data);
        printLine(dest);
    }
}

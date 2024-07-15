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
        data = dataBuffer - 8;
    }
    VAR0 = data;
    FUN0();
}
extern char * VAR0;
extern char * VAR1;
void FUN0()
{
    char * data = VAR0;
    {
        size_t i;
        char dest[100];
        memset(dest, 'C', 100-1); 
        dest[100-1] = '\0'; 
        for (i = 0; i < 100; i++)
        {
<START>
            dest[i] = data[i];
<END>
        }
        dest[100-1] = '\0';
        printLine(dest);
    }
}

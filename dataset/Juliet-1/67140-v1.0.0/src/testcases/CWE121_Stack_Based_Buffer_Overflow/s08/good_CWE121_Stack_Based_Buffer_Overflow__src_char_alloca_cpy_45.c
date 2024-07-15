static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    {
        char dest[50] = "";
        strcpy(dest, data);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char * dataBuffer = (char *)ALLOCA(100*sizeof(char));
    data = dataBuffer;
    memset(data, 'A', 50-1); 
    data[50-1] = '\0'; 
    VAR1 = data;
    FUN0();
}

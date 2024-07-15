char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    char * VAR2 = (char *)ALLOCA(50*sizeof(char));
    char * VAR3 = (char *)ALLOCA(100*sizeof(char));
    data = VAR3;
    data[0] = '\0'; 
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
        strncpy(data, source, 100-1);
        data[100-1] = '\0'; 
        printLine(data);
    }
}

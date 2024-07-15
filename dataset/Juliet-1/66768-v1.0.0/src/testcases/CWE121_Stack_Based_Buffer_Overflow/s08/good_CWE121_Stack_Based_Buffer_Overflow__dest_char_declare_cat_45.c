static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strcat(data, source);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char VAR2[50];
    char VAR3[100];
    data = VAR3;
    data[0] = '\0'; 
    VAR1 = data;
    FUN0();
}

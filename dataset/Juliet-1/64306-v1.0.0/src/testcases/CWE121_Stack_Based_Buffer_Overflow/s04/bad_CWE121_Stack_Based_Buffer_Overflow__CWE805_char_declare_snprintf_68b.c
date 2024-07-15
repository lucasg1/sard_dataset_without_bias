char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    char VAR2[50];
    char VAR3[100];
    data = VAR2;
    data[0] = '\0'; 
    VAR0 = data;
    FUN0();
}
extern char * VAR0;
extern char * VAR1;
void FUN0()
{
    char * data = VAR0;
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        SNPRINTF(data, 100, "%s", source);
<END>
        printLine(data);
    }
}

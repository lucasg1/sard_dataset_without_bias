char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    char * VAR2 = (char *)ALLOCA((10)*sizeof(char));
    char * VAR3 = (char *)ALLOCA((10+1)*sizeof(char));
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
        char source[10+1] = SRC_STRING;
<START>
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
    }
}

static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    {
        char source[10+1] = SRC_STRING;
        strcpy(data, source);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char * VAR2 = (char *)ALLOCA((10)*sizeof(char));
    char * VAR3 = (char *)ALLOCA((10+1)*sizeof(char));
    data = VAR3;
    data[0] = '\0'; 
    VAR1 = data;
    FUN0();
}

static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    {
        char source[10+1] = SRC_STRING;
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char VAR2[10];
    char VAR3[10+1];
    data = VAR3;
    data[0] = '\0'; 
    VAR1 = data;
    FUN0();
}

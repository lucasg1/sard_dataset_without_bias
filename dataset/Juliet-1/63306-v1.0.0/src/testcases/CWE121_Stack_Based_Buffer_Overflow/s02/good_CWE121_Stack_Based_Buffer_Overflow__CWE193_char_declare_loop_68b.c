char * VAR0;
char * VAR1;
void FUN0();
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
extern char * VAR0;
extern char * VAR1;
void FUN0()
{
    char * data = VAR1;
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
            data[i] = source[i];
        }
        printLine(data);
    }
}

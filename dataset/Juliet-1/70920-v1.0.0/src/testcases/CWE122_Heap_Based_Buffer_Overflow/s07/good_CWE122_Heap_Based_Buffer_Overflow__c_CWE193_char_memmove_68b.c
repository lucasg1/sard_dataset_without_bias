char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc((10+1)*sizeof(char));
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
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
        free(data);
    }
}

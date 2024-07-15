char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(10*sizeof(char));
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
        strcpy(data, source);
<END>
        printLine(data);
        free(data);
    }
}

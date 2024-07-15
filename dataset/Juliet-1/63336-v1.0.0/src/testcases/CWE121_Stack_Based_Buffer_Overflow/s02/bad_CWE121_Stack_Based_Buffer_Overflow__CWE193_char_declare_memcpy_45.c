static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR0;
    {
        char source[10+1] = SRC_STRING;
<START>
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char VAR2[10];
    char VAR3[10+1];
    data = VAR2;
    data[0] = '\0'; 
    VAR0 = data;
    FUN0();
}

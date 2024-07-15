static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR0;
    {
        char source[10+1] = SRC_STRING;
        size_t i, sourceLen;
        sourceLen = strlen(source);
        for (i = 0; i < sourceLen + 1; i++)
        {
<START>
            data[i] = source[i];
<END>
        }
        printLine(data);
    }
}
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

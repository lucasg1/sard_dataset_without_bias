static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR0;
    {
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
        strncat(data, source, 100);
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    char * VAR2 = (char *)ALLOCA(50*sizeof(char));
    char * VAR3 = (char *)ALLOCA(100*sizeof(char));
<START>
    data = VAR2;
<END>
    data[0] = '\0'; 
    VAR0 = data;
    FUN0();
}

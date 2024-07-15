char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    char * VAR2 = (char *)ALLOCA(50*sizeof(char));
    char * VAR3 = (char *)ALLOCA(100*sizeof(char));
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
        memcpy(data, source, 100*sizeof(char));
<END>
        data[100-1] = '\0'; 
        printLine(data);
    }
}

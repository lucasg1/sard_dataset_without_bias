char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(50*sizeof(char));
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
        strcat(data, source);
<END>
        printLine(data);
        free(data);
    }
}

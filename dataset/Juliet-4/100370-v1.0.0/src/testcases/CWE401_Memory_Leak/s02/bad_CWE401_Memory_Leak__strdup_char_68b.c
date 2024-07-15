char * VAR0;
char * VAR1;
char * VAR2;
void FUN0();
void FUN1()
{
    char * data;
    data = NULL;
    {
        char myString[] = "myString";
        data = strdup(myString);
        printLine(data);
    }
    VAR0 = data;
    FUN0();
}
extern char * VAR0;
extern char * VAR1;
extern char * VAR2;
void FUN0()
{
    char * data = VAR0;
<START>
<END>
    ; 
}

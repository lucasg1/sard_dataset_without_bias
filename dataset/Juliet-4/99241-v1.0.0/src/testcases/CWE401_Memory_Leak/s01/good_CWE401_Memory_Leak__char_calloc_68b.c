char * VAR0;
char * VAR1;
char * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    char * data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    VAR2 = data;
    FUN1();
}
extern char * VAR0;
extern char * VAR1;
extern char * VAR2;
void FUN0()
{
    char * data = VAR1;
    ; 
}
void FUN1()
{
    char * data = VAR2;
    free(data);
}

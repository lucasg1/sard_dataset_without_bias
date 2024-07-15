static char * VAR0;
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR1;
    ; 
}
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)ALLOCA(100*sizeof(char));
    strcpy(data, "A String");
    printLine(data);
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    char * data = VAR2;
    free(data);
}
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
    strcpy(data, "A String");
    printLine(data);
    VAR2 = data;
    FUN2();
}

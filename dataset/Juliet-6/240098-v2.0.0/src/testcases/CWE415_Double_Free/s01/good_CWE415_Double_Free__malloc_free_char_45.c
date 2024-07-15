static char * VAR0;
static char * VAR1;
static char * VAR2;
void FUN0()
{
    char * data = VAR1;
    free(data);
}
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    char * data = VAR2;
    ; 
}
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR2 = data;
    FUN2();
}

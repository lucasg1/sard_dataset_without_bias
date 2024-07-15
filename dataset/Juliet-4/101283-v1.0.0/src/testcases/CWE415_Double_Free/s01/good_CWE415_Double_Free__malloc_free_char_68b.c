char * VAR0;
char * VAR1;
char * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    free(data);
    VAR2 = data;
    FUN1();
}
extern char * VAR0;
extern char * VAR1;
extern char * VAR2;
void FUN0()
{
    char * data = VAR1;
    free(data);
}
void FUN1()
{
    char * data = VAR2;
    ; 
}

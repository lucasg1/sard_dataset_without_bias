int * VAR0;
int * VAR1;
int * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    VAR2 = data;
    FUN1();
}
extern int * VAR0;
extern int * VAR1;
extern int * VAR2;
void FUN0()
{
    int * data = VAR1;
    free(data);
}
void FUN1()
{
    int * data = VAR2;
    ; 
}

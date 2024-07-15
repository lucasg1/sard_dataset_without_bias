static int * VAR0;
static int * VAR1;
static int * VAR2;
void FUN0()
{
    int * data = VAR1;
    free(data);
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    int * data = VAR2;
    ; 
}
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR2 = data;
    FUN2();
}

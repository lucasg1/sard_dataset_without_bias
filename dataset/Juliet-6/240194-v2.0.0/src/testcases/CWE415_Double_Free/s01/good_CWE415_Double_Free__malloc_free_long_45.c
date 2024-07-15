static long * VAR0;
static long * VAR1;
static long * VAR2;
void FUN0()
{
    long * data = VAR1;
    free(data);
}
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    long * data = VAR2;
    ; 
}
void FUN3()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR2 = data;
    FUN2();
}

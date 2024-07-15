long * VAR0;
long * VAR1;
long * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    VAR2 = data;
    FUN1();
}
extern long * VAR0;
extern long * VAR1;
extern long * VAR2;
void FUN0()
{
    long * data = VAR1;
    free(data);
}
void FUN1()
{
    long * data = VAR2;
    ; 
}

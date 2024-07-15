long * VAR0;
long * VAR1;
long * VAR2;
void FUN0();
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    free(data);
    VAR0 = data;
    FUN0();
}
extern long * VAR0;
extern long * VAR1;
extern long * VAR2;
void FUN0()
{
    long * data = VAR0;
<START>
    free(data);
<END>
}

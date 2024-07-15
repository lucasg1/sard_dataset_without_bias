static long * VAR0;
static long * VAR1;
static long * VAR2;
void FUN0()
{
    long * data = VAR0;
<START>
    free(data);
<END>
}
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR0 = data;
    FUN0();
}

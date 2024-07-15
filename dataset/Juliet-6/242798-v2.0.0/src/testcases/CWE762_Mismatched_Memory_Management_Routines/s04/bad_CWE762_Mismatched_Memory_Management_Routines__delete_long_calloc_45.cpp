namespace NAMESPACE0
{
static long * VAR1;
static long * VAR2;
static long * VAR3;
void FUN0()
{
    long * data = VAR1;
<START>
    delete data;
<END>
}
void FUN1()
{
    long * data;
    data = NULL;
    data = (long *)calloc(100, sizeof(long));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
} 

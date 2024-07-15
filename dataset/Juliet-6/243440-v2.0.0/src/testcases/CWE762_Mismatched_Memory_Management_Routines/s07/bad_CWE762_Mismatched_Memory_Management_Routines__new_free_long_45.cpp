namespace NAMESPACE0
{
static long * VAR1;
static long * VAR2;
static long * VAR3;
void FUN0()
{
    long * data = VAR1;
<START>
    free(data);
<END>
}
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    VAR1 = data;
    FUN0();
}
} 

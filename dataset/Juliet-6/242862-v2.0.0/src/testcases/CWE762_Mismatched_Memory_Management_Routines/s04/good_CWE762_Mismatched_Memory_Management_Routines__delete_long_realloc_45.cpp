namespace NAMESPACE0
{
static long * VAR1;
static long * VAR2;
static long * VAR3;
void FUN0()
{
    long * data = VAR2;
    delete data;
}
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    long * data = VAR3;
    free(data);
}
void FUN3()
{
    long * data;
    data = NULL;
    data = NULL;
    data = (long *)realloc(data, 100*sizeof(long));
    if (data == NULL) {exit(-1);}
    VAR3 = data;
    FUN2();
}
} 

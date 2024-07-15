namespace NAMESPACE0
{
static int64_t * VAR1;
static int64_t * VAR2;
static int64_t * VAR3;
void FUN0()
{
    int64_t * data = VAR2;
    delete data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    int64_t * data = VAR3;
    ; 
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    delete data;
    VAR3 = data;
    FUN2();
}
} 

namespace NAMESPACE0
{
static int64_t * VAR1;
static int64_t * VAR2;
static int64_t * VAR3;
void FUN0()
{
    int64_t * data = VAR2;
    ; 
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    int64_t VAR4[100];
    data = VAR4;
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    int64_t * data = VAR3;
    delete[] data;
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR3 = data;
    FUN2();
}
} 

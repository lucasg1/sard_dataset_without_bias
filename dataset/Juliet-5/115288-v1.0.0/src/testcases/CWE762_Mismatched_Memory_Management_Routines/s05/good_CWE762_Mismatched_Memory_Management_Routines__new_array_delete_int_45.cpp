namespace NAMESPACE0
{
static int * VAR1;
static int * VAR2;
static int * VAR3;
void FUN0()
{
    int * data = VAR2;
    delete data;
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int;
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    int * data = VAR3;
    delete [] data;
}
void FUN3()
{
    int * data;
    data = NULL;
    data = new int[100];
    VAR3 = data;
    FUN2();
}
} 

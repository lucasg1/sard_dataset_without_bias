namespace NAMESPACE0
{
static int * VAR1;
static int * VAR2;
static int * VAR3;
void FUN0()
{
    int * data = VAR2;
    ; 
}
void FUN1()
{
    int * data;
    data = NULL;
    int VAR4[100];
    data = VAR4;
    data[0] = 5;
    printIntLine(data[0]);
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    int * data = VAR3;
    delete[] data;
}
void FUN3()
{
    int * data;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    VAR3 = data;
    FUN2();
}
} 

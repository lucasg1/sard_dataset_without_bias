namespace NAMESPACE0
{
static twoIntsStruct * VAR1;
static twoIntsStruct * VAR2;
static twoIntsStruct * VAR3;
void FUN0()
{
    twoIntsStruct * data = VAR2;
    delete data;
}
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    twoIntsStruct * data = VAR3;
    delete [] data;
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    VAR3 = data;
    FUN2();
}
} 

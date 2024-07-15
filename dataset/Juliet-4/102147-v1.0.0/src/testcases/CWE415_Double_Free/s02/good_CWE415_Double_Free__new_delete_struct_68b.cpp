namespace NAMESPACE0
{
twoIntsStruct * VAR1;
twoIntsStruct * VAR2;
twoIntsStruct * VAR3;
void FUN0();
void FUN1();
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    delete data;
    VAR3 = data;
    FUN1();
}
} 
namespace NAMESPACE0
{
extern twoIntsStruct * VAR1;
extern twoIntsStruct * VAR2;
extern twoIntsStruct * VAR3;
void FUN0()
{
    twoIntsStruct * data = VAR2;
    delete data;
}
void FUN1()
{
    twoIntsStruct * data = VAR3;
    ; 
}
} 

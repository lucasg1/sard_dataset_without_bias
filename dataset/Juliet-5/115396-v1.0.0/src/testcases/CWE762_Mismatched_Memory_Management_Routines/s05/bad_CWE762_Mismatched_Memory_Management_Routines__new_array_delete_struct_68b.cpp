namespace NAMESPACE0
{
twoIntsStruct * VAR1;
twoIntsStruct * VAR2;
twoIntsStruct * VAR3;
void FUN0();
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern twoIntsStruct * VAR1;
extern twoIntsStruct * VAR2;
extern twoIntsStruct * VAR3;
void FUN0()
{
    twoIntsStruct * data = VAR1;
<START>
    delete data;
<END>
}
} 

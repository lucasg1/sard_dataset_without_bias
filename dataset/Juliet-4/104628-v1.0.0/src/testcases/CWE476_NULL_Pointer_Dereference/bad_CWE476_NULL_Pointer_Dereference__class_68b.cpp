namespace NAMESPACE0
{
TwoIntsClass * VAR1;
TwoIntsClass * VAR2;
TwoIntsClass * VAR3;
void FUN0();
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    VAR1 = data;
    FUN0();
}
} 
namespace NAMESPACE0
{
extern TwoIntsClass * VAR1;
extern TwoIntsClass * VAR2;
extern TwoIntsClass * VAR3;
void FUN0()
{
    TwoIntsClass * data = VAR1;
<START>
    printIntLine(data->intOne);
<END>
    delete data;
}
} 

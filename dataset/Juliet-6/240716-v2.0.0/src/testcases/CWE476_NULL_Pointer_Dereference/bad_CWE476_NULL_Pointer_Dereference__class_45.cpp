namespace NAMESPACE0
{
static TwoIntsClass * VAR1;
static TwoIntsClass * VAR2;
static TwoIntsClass * VAR3;
void FUN0()
{
    TwoIntsClass * data = VAR1;
<START>
    printIntLine(data->intOne);
<END>
    delete data;
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    VAR1 = data;
    FUN0();
}
} 

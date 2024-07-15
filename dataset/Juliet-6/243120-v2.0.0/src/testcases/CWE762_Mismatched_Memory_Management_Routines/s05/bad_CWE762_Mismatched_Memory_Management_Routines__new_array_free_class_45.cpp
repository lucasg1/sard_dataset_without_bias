namespace NAMESPACE0
{
static TwoIntsClass * VAR1;
static TwoIntsClass * VAR2;
static TwoIntsClass * VAR3;
void FUN0()
{
    TwoIntsClass * data = VAR1;
<START>
    free(data);
<END>
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    VAR1 = data;
    FUN0();
}
} 

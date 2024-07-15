namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
<START>
    printIntLine(data->intOne);
<END>
    delete data;
}
void FUN1()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN0;
    data = NULL;
    funcPtr(data);
}
} 

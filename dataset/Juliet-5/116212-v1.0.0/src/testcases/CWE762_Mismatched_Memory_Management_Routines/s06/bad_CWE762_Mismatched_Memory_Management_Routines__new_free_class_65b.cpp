namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass * data;
    void (*funcPtr) (TwoIntsClass *) = FUN0;
    data = NULL;
    data = new TwoIntsClass;
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
<START>
    free(data);
<END>
}
} 

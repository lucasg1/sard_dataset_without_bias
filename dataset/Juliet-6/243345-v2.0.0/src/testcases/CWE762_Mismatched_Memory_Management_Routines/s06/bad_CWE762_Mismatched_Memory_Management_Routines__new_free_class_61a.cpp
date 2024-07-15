namespace NAMESPACE0
{
TwoIntsClass * FUN0(TwoIntsClass * data)
{
    data = new TwoIntsClass;
    return data;
}
} 
namespace NAMESPACE0
{
TwoIntsClass * FUN0(TwoIntsClass * data);
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    data = FUN0(data);
<START>
    free(data);
<END>
}
} 

namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * data)
{
<START>
    delete data;
<END>
}
} 

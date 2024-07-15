namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = new TwoIntsClass;
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data);
void FUN2()
{
    TwoIntsClass * data;
    data = NULL;
    FUN0(data);
<START>
    delete [] data;
<END>
}
} 

namespace NAMESPACE0
{
TwoIntsClass * FUN0(TwoIntsClass * data)
{
    data = (TwoIntsClass *)malloc(100*sizeof(TwoIntsClass));
    if (data == NULL) {exit(-1);}
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
    delete [] data;
<END>
}
} 

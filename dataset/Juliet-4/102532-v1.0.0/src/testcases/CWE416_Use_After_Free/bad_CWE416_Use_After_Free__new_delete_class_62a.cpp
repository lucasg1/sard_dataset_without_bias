namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    data = new TwoIntsClass;
    data->intOne = 1;
    data->intTwo = 2;
    delete data;
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
    printIntLine(data->intOne);
<END>
}
} 

namespace NAMESPACE0
{
void FUN0(TwoIntsClass * dataArray[]);
void FUN1()
{
    TwoIntsClass * data;
    TwoIntsClass * dataArray[5];
    data = NULL;
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(TwoIntsClass * dataArray[])
{
    TwoIntsClass * data = dataArray[2];
<START>
    printIntLine(data->intOne);
<END>
    delete data;
}
} 

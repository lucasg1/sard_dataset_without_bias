namespace NAMESPACE0
{
void FUN0(TwoIntsClass * dataArray[]);
void FUN1()
{
    TwoIntsClass * data;
    TwoIntsClass * dataArray[5];
    data = NULL;
    data = NULL;
    data = (TwoIntsClass *)realloc(data, 100*sizeof(TwoIntsClass));
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
    delete [] data;
<END>
}
} 

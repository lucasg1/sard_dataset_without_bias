namespace NAMESPACE0
{
void FUN0(twoIntsStruct * dataArray[]);
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * dataArray[5];
    data = NULL;
    data = NULL;
    data = (twoIntsStruct *)realloc(data, 100*sizeof(twoIntsStruct));
    dataArray[2] = data;
    FUN0(dataArray);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * dataArray[])
{
    twoIntsStruct * data = dataArray[2];
<START>
    delete data;
<END>
}
} 

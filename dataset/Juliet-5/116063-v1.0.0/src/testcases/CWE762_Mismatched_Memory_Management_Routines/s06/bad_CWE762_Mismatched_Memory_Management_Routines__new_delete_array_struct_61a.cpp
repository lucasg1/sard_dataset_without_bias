namespace NAMESPACE0
{
twoIntsStruct * FUN0(twoIntsStruct * data)
{
    data = new twoIntsStruct;
    return data;
}
} 
namespace NAMESPACE0
{
twoIntsStruct * FUN0(twoIntsStruct * data);
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    data = FUN0(data);
<START>
    delete [] data;
<END>
}
} 

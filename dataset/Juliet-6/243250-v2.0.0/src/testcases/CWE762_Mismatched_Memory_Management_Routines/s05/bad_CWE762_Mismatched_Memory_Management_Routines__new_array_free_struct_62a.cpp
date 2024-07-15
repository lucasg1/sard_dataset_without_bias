namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    data = new twoIntsStruct[100];
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data);
void FUN2()
{
    twoIntsStruct * data;
    data = NULL;
    FUN0(data);
<START>
    free(data);
<END>
}
} 

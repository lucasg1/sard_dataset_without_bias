namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
<START>
    free(data);
<END>
}
} 

namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
void FUN1(twoIntsStruct * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(twoIntsStruct * data);
void FUN3()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN1(data);
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

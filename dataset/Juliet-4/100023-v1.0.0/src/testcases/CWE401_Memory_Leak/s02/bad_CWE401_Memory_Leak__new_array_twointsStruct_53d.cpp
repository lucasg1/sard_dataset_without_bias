namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data);
void FUN1()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine(&data[0]);
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(twoIntsStruct * data);
void FUN0(twoIntsStruct * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(twoIntsStruct * data);
void FUN2(twoIntsStruct * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN4(twoIntsStruct * data)
{
<START>
<END>
    ; 
}
} 

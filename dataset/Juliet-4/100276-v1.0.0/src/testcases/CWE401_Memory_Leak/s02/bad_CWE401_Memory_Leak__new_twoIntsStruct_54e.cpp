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
void FUN1(twoIntsStruct * data);
void FUN3(twoIntsStruct * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN3(twoIntsStruct * data);
void FUN5(twoIntsStruct * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(twoIntsStruct * data);
void FUN7()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine(data);
    FUN5(data);
}
} 
namespace NAMESPACE0
{
void FUN0(twoIntsStruct * data)
{
<START>
<END>
    ; 
}
} 

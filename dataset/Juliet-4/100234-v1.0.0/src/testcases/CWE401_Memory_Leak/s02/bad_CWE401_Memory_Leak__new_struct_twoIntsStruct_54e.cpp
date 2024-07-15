namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * data);
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(struct _twoIntsStruct * data);
void FUN3(struct _twoIntsStruct * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(struct _twoIntsStruct * data);
void FUN2(struct _twoIntsStruct * data)
{
    FUN4(data);
}
} 
namespace NAMESPACE0
{
void FUN3(struct _twoIntsStruct * data);
void FUN0(struct _twoIntsStruct * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(struct _twoIntsStruct * data)
{
<START>
<END>
    ; 
}
} 

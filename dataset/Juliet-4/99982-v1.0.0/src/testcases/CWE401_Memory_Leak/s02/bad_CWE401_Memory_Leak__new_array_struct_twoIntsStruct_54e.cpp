namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * data);
void FUN1(struct _twoIntsStruct * data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN2(struct _twoIntsStruct * data);
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(struct _twoIntsStruct * data);
void FUN2(struct _twoIntsStruct * data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN6(struct _twoIntsStruct * data);
void FUN0(struct _twoIntsStruct * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(struct _twoIntsStruct * data)
{
<START>
<END>
    ; 
}
} 

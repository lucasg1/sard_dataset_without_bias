namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * data);
void FUN1(struct _twoIntsStruct * data)
{
    FUN0(data);
}
void FUN2(struct _twoIntsStruct * data);
void FUN3(struct _twoIntsStruct * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN1(struct _twoIntsStruct * data);
void FUN5()
{
    struct _twoIntsStruct * data;
    data = NULL;
    struct _twoIntsStruct VAR2;
    data = &VAR2;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    FUN1(data);
}
void FUN3(struct _twoIntsStruct * data);
void FUN7()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(struct _twoIntsStruct * data);
void FUN0(struct _twoIntsStruct * data)
{
    FUN9(data);
}
void FUN11(struct _twoIntsStruct * data);
void FUN2(struct _twoIntsStruct * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN9(struct _twoIntsStruct * data)
{
    ; 
}
void FUN11(struct _twoIntsStruct * data)
{
    delete data;
}
} 

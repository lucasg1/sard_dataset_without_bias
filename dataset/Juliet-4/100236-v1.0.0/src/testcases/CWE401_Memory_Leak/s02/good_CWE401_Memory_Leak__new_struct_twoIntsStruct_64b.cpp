namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr);
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    struct _twoIntsStruct VAR1;
    data = &VAR1;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(void * dataVoidPtr)
{
    struct _twoIntsStruct * * dataPtr = (struct _twoIntsStruct * *)dataVoidPtr;
    struct _twoIntsStruct * data = (*dataPtr);
    ; 
}
void FUN2(void * dataVoidPtr)
{
    struct _twoIntsStruct * * dataPtr = (struct _twoIntsStruct * *)dataVoidPtr;
    struct _twoIntsStruct * data = (*dataPtr);
    delete data;
}
} 

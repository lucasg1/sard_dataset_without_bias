namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * * data);
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    struct _twoIntsStruct VAR1[100];
    data = VAR1;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    FUN0(&data);
}
void FUN2(struct _twoIntsStruct * * data);
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * * dataPtr)
{
    struct _twoIntsStruct * data = *dataPtr;
    ; 
}
void FUN2(struct _twoIntsStruct * * dataPtr)
{
    struct _twoIntsStruct * data = *dataPtr;
    delete[] data;
}
} 

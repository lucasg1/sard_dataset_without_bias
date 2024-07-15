namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * data);
void FUN1()
{
    struct _twoIntsStruct * data;
    void (*funcPtr) (struct _twoIntsStruct *) = FUN0;
    data = NULL;
    struct _twoIntsStruct VAR1[100];
    data = VAR1;
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    funcPtr(data);
}
void FUN2(struct _twoIntsStruct * data);
void FUN3()
{
    struct _twoIntsStruct * data;
    void (*funcPtr) (struct _twoIntsStruct *) = FUN2;
    data = NULL;
    data = new struct _twoIntsStruct[100];
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(struct _twoIntsStruct * data)
{
    ; 
}
void FUN2(struct _twoIntsStruct * data)
{
    delete[] data;
}
} 

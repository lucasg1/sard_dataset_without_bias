void FUN0(void * dataVoidPtr);
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    FUN0(&data);
}
void FUN2(void * dataVoidPtr);
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    FUN2(&data);
}
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
    free(data);
}

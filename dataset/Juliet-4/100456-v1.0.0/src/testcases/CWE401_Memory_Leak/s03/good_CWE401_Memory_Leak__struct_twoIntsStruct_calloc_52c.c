void FUN0(struct _twoIntsStruct * data);
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    FUN0(data);
}
void FUN2(struct _twoIntsStruct * data);
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    FUN2(data);
}
void FUN5(struct _twoIntsStruct * data);
void FUN0(struct _twoIntsStruct * data)
{
    FUN5(data);
}
void FUN7(struct _twoIntsStruct * data);
void FUN2(struct _twoIntsStruct * data)
{
    FUN7(data);
}
void FUN5(struct _twoIntsStruct * data)
{
    ; 
}
void FUN7(struct _twoIntsStruct * data)
{
    free(data);
}

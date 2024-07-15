void FUN0(struct _twoIntsStruct * * dataPtr);
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    FUN0(&data);
}
void FUN0(struct _twoIntsStruct * * dataPtr)
{
    struct _twoIntsStruct * data = *dataPtr;
<START>
<END>
    ; 
}

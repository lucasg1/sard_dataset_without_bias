void FUN0(struct _twoIntsStruct * data);
void FUN1()
{
    struct _twoIntsStruct * data;
    void (*funcPtr) (struct _twoIntsStruct *) = FUN0;
    data = NULL;
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    funcPtr(data);
}
void FUN0(struct _twoIntsStruct * data)
{
<START>
<END>
    ; 
}

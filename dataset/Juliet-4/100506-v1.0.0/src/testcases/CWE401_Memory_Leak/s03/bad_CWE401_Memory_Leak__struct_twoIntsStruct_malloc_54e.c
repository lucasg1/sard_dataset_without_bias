void FUN0(struct _twoIntsStruct * data);
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    FUN0(data);
}
void FUN2(struct _twoIntsStruct * data);
void FUN0(struct _twoIntsStruct * data)
{
    FUN2(data);
}
void FUN4(struct _twoIntsStruct * data);
void FUN2(struct _twoIntsStruct * data)
{
    FUN4(data);
}
void FUN6(struct _twoIntsStruct * data);
void FUN4(struct _twoIntsStruct * data)
{
    FUN6(data);
}
void FUN6(struct _twoIntsStruct * data)
{
<START>
<END>
    ; 
}

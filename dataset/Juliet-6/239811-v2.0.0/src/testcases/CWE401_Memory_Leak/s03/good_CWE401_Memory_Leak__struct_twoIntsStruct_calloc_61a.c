struct _twoIntsStruct * FUN0(struct _twoIntsStruct * data)
{
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    return data;
}
struct _twoIntsStruct * FUN1(struct _twoIntsStruct * data)
{
    data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    return data;
}
struct _twoIntsStruct * FUN0(struct _twoIntsStruct * data);
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = FUN0(data);
    ; 
}
struct _twoIntsStruct * FUN1(struct _twoIntsStruct * data);
void FUN5()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = FUN1(data);
    free(data);
}

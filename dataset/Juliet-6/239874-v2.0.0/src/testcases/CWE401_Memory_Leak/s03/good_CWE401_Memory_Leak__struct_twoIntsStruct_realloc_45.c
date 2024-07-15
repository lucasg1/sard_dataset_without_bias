static struct _twoIntsStruct * VAR0;
static struct _twoIntsStruct * VAR1;
static struct _twoIntsStruct * VAR2;
void FUN0()
{
    struct _twoIntsStruct * data = VAR1;
    ; 
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    struct _twoIntsStruct * data = VAR2;
    free(data);
}
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    VAR2 = data;
    FUN2();
}

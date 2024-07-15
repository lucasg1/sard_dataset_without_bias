void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(globalReturnsTrue())
    {
        free(data);
    }
}
void FUN2()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(globalReturnsTrue())
    {
        ; 
    }
}

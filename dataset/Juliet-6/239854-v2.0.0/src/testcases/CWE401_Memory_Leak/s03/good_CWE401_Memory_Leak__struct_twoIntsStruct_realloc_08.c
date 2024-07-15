static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(FUN0())
    {
        free(data);
    }
}
void FUN4()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(FUN1())
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
    if(FUN0())
    {
        ; 
    }
}
void FUN5()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(FUN0())
    {
        ; 
    }
}

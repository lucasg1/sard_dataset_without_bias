void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = (struct _twoIntsStruct *)malloc(100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(GLOBAL_CONST_TRUE)
    {
        free(data);
    }
}
void FUN2()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
}
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
}

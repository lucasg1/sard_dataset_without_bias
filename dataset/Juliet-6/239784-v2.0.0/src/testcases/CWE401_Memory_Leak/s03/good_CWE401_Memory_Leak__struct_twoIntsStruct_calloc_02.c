void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(1)
    {
        data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(0)
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
    if(1)
    {
        data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(1)
    {
        free(data);
    }
}
void FUN2()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(0)
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
    if(1)
    {
        ; 
    }
}
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(1)
    {
        data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(1)
    {
        ; 
    }
}

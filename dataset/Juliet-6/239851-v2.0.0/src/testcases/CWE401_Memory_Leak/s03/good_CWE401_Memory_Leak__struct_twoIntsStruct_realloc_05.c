static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
        if (data == NULL) {exit(-1);}
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN2()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(staticFalse)
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
    if(staticTrue)
    {
        ; 
    }
}
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printStructLine((twoIntsStruct *)&data[0]);
    }
    if(staticTrue)
    {
        ; 
    }
}

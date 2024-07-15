static int VAR0 = 0;
static int VAR1 = 0;
static int VAR2 = 0;
void FUN0(struct _twoIntsStruct * data)
{
    if(VAR0)
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
    data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(struct _twoIntsStruct * data)
{
    if(VAR1)
    {
        free(data);
    }
}
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)calloc(100, sizeof(struct _twoIntsStruct));
    if (data == NULL) {exit(-1);}
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    VAR1 = 1; 
    FUN2(data);
}
void FUN4(struct _twoIntsStruct * data)
{
    if(VAR2)
    {
        ; 
    }
}
void FUN5()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = (struct _twoIntsStruct *)ALLOCA(100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
    VAR2 = 1; 
    FUN4(data);
}

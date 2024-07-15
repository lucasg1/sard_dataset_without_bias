namespace NAMESPACE0
{
static int VAR1 = 0;
static int VAR2 = 0;
static int VAR3 = 0;
void FUN0(struct _twoIntsStruct * data)
{
    if(VAR1)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(struct _twoIntsStruct * data)
{
    if(VAR2)
    {
        delete data;
    }
}
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(struct _twoIntsStruct * data)
{
    if(VAR3)
    {
        ; 
    }
}
void FUN5()
{
    struct _twoIntsStruct * data;
    data = NULL;
    struct _twoIntsStruct VAR4;
    data = &VAR4;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    VAR3 = 1; 
    FUN4(data);
}
} 

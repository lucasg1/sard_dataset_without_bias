namespace NAMESPACE0
{
static struct _twoIntsStruct * VAR1;
static struct _twoIntsStruct * VAR2;
static struct _twoIntsStruct * VAR3;
void FUN0()
{
    struct _twoIntsStruct * data = VAR2;
    ; 
}
void FUN1()
{
    struct _twoIntsStruct * data;
    data = NULL;
    struct _twoIntsStruct VAR4;
    data = &VAR4;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    VAR2 = data;
    FUN0();
}
void FUN2()
{
    struct _twoIntsStruct * data = VAR3;
    delete data;
}
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    data = new struct _twoIntsStruct;
    data->intOne = 0;
    data->intTwo = 0;
    printStructLine((twoIntsStruct *)data);
    VAR3 = data;
    FUN2();
}
} 

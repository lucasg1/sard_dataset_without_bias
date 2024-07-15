static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
namespace NAMESPACE0
{
void FUN2()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = new struct _twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        delete data;
    }
}
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(FUN0())
    {
        data = new struct _twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    if(FUN0())
    {
        delete data;
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
        struct _twoIntsStruct VAR1;
        data = &VAR1;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
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
        struct _twoIntsStruct VAR1;
        data = &VAR1;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    if(FUN0())
    {
        ; 
    }
}
} 

static const int STATIC_CONST_FIVE = 5;
namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new struct _twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        data = new struct _twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        delete data;
    }
}
void FUN2()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
}
void FUN3()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        struct _twoIntsStruct VAR1;
        data = &VAR1;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new struct _twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        data = new struct _twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        delete data;
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
        struct _twoIntsStruct VAR1;
        data = &VAR1;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
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
        struct _twoIntsStruct VAR1;
        data = &VAR1;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine((twoIntsStruct *)data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        ; 
    }
}
} 

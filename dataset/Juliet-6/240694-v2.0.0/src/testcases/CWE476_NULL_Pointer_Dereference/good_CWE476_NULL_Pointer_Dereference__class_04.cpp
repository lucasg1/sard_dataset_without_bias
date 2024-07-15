static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    if(STATIC_CONST_TRUE)
    {
        data = NULL;
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (data != NULL)
        {
            printIntLine(data->intOne);
            delete data;
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN1()
{
    TwoIntsClass * data;
    if(STATIC_CONST_TRUE)
    {
        data = NULL;
    }
    if(STATIC_CONST_TRUE)
    {
        if (data != NULL)
        {
            printIntLine(data->intOne);
            delete data;
        }
        else
        {
            printLine("data is NULL");
        }
    }
}
void FUN2()
{
    TwoIntsClass * data;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data->intOne);
        delete data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    if(STATIC_CONST_TRUE)
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data->intOne);
        delete data;
    }
}
} 

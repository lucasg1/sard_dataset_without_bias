static int staticTrue = 1; 
static int staticFalse = 0; 
namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = NULL;
    }
    if(staticTrue)
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
    if(staticFalse)
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
    if(staticTrue)
    {
        printIntLine(data->intOne);
        delete data;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    if(staticTrue)
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
    }
    if(staticTrue)
    {
        printIntLine(data->intOne);
        delete data;
    }
}
} 

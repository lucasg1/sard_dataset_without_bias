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
    TwoIntsClass * data;
    if(FUN0())
    {
        data = NULL;
    }
    if(FUN1())
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
void FUN3()
{
    TwoIntsClass * data;
    if(FUN0())
    {
        data = NULL;
    }
    if(FUN0())
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
void FUN4()
{
    TwoIntsClass * data;
    if(FUN1())
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
    if(FUN0())
    {
        printIntLine(data->intOne);
        delete data;
    }
}
void FUN5()
{
    TwoIntsClass * data;
    if(FUN0())
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
    }
    if(FUN0())
    {
        printIntLine(data->intOne);
        delete data;
    }
}
} 

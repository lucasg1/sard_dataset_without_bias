namespace NAMESPACE0
{
int VAR1 = 0;
int VAR2 = 0;
int VAR3 = 0;
void FUN0(TwoIntsClass * data);
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    VAR1 = 0; 
    FUN0(data);
}
void FUN2(TwoIntsClass * data);
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    VAR2 = 1; 
    FUN2(data);
}
void FUN4(TwoIntsClass * data);
void FUN5()
{
    TwoIntsClass * data;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intOne = 0;
        data = tmpData;
    }
    VAR3 = 1; 
    FUN4(data);
}
} 
namespace NAMESPACE0
{
extern int VAR1;
extern int VAR2;
extern int VAR3;
void FUN0(TwoIntsClass * data)
{
    if(VAR1)
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
void FUN2(TwoIntsClass * data)
{
    if(VAR2)
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
void FUN4(TwoIntsClass * data)
{
    if(VAR3)
    {
        printIntLine(data->intOne);
        delete data;
    }
}
} 

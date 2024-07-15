namespace NAMESPACE0
{
TwoIntsClass * VAR1;
TwoIntsClass * VAR2;
TwoIntsClass * VAR3;
void FUN0();
void FUN1();
void FUN2()
{
    TwoIntsClass * data;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intOne = 0;
        data = tmpData;
    }
    VAR2 = data;
    FUN0();
}
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    VAR3 = data;
    FUN1();
}
} 
namespace NAMESPACE0
{
extern TwoIntsClass * VAR1;
extern TwoIntsClass * VAR2;
extern TwoIntsClass * VAR3;
void FUN0()
{
    TwoIntsClass * data = VAR2;
    printIntLine(data->intOne);
    delete data;
}
void FUN1()
{
    TwoIntsClass * data = VAR3;
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

namespace NAMESPACE0
{
static TwoIntsClass * VAR1;
static TwoIntsClass * VAR2;
static TwoIntsClass * VAR3;
void FUN0()
{
    TwoIntsClass * data = VAR2;
    printIntLine(data->intOne);
    delete data;
}
void FUN1()
{
    TwoIntsClass * data;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intTwo = 0;
        data = tmpData;
    }
    VAR2 = data;
    FUN0();
}
void FUN2()
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
void FUN3()
{
    TwoIntsClass * data;
    data = NULL;
    VAR3 = data;
    FUN2();
}
} 

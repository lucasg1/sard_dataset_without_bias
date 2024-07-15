namespace NAMESPACE0
{
typedef union
{
    TwoIntsClass * unionFirst;
    TwoIntsClass * unionSecond;
} unionType;
void FUN0()
{
    TwoIntsClass * data;
    unionType myUnion;
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intTwo = 0;
        data = tmpData;
    }
    myUnion.unionFirst = data;
    {
        TwoIntsClass * data = myUnion.unionSecond;
        printIntLine(data->intOne);
        delete data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    unionType myUnion;
    data = NULL;
    myUnion.unionFirst = data;
    {
        TwoIntsClass * data = myUnion.unionSecond;
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
} 

namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    while(1)
    {
        data = NULL;
        break;
    }
    while(1)
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
        break;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    while(1)
    {
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
        break;
    }
    while(1)
    {
        printIntLine(data->intOne);
        delete data;
        break;
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * *dataPtr1 = &data;
    TwoIntsClass * *dataPtr2 = &data;
    {
        TwoIntsClass * data = *dataPtr1;
        {
            TwoIntsClass * tmpData = new TwoIntsClass;
            tmpData->intOne = 0;
            tmpData->intTwo = 0;
            data = tmpData;
        }
        *dataPtr1 = data;
    }
    {
        TwoIntsClass * data = *dataPtr2;
        printIntLine(data->intOne);
        delete data;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    TwoIntsClass * *dataPtr1 = &data;
    TwoIntsClass * *dataPtr2 = &data;
    {
        TwoIntsClass * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        TwoIntsClass * data = *dataPtr2;
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

void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    {
        twoIntsStruct * data = *dataPtr1;
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        printIntLine(data->intOne);
    }
}
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    {
        twoIntsStruct * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
        if (data != NULL)
        {
            printIntLine(data->intOne);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

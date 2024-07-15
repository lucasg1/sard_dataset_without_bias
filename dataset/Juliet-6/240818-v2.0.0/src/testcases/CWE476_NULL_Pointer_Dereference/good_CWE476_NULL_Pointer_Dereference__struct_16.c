void FUN0()
{
    twoIntsStruct * data;
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
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    while(1)
    {
        {
            tmpData.intOne = 0;
            tmpData.intTwo = 0;
            data = &tmpData;
        }
        break;
    }
    while(1)
    {
        printIntLine(data->intOne);
        break;
    }
}

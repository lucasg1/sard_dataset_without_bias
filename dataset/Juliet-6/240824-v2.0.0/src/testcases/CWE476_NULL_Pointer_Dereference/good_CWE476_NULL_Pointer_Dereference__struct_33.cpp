namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    twoIntsStruct * &dataRef = data;
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    {
        twoIntsStruct * data = dataRef;
        printIntLine(data->intOne);
    }
}
void FUN1()
{
    twoIntsStruct * data;
    twoIntsStruct * &dataRef = data;
    data = NULL;
    {
        twoIntsStruct * data = dataRef;
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
} 

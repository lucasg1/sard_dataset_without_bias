void FUN0()
{
    twoIntsStruct * data;
    switch(6)
    {
    case 6:
        data = NULL;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
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
    switch(6)
    {
    case 6:
        data = NULL;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        if (data != NULL)
        {
            printIntLine(data->intOne);
        }
        else
        {
            printLine("data is NULL");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    break;
    }
    switch(7)
    {
    case 7:
        printIntLine(data->intOne);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    twoIntsStruct * data;
    twoIntsStruct tmpData;
    switch(6)
    {
    case 6:
    {
        tmpData.intOne = 0;
        tmpData.intTwo = 0;
        data = &tmpData;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printIntLine(data->intOne);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

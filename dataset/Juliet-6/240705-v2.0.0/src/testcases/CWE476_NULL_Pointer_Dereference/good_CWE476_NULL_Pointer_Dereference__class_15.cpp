namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
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
            delete data;
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
    TwoIntsClass * data;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intTwo = 0;
        data = tmpData;
    }
    break;
    }
    switch(7)
    {
    case 7:
        printIntLine(data->intOne);
        delete data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    TwoIntsClass * data;
    switch(6)
    {
    case 6:
    {
        TwoIntsClass * tmpData = new TwoIntsClass;
        tmpData->intOne = 0;
        tmpData->intTwo = 0;
        data = tmpData;
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
        delete data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        TwoIntsClass * data;
        data = new TwoIntsClass;
        data->intOne = 5;
        data->intTwo = 6;
        TwoIntsClass * * pointer = new TwoIntsClass *;
        *pointer = data; 
        {
            TwoIntsClass * data = *pointer;
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
        delete pointer;
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        TwoIntsClass * data;
        data = new TwoIntsClass;
        data->intOne = 5;
        data->intTwo = 6;
        TwoIntsClass * * pointer = new TwoIntsClass *;
        *pointer = data; 
        {
            TwoIntsClass * data = *pointer;
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
        delete pointer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 

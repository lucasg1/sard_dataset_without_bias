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
        twoIntsStruct * data;
        data = new twoIntsStruct;
        data->intOne = 5;
        data->intTwo = 6;
        twoIntsStruct * * pointer = new twoIntsStruct *;
        *pointer = data; 
        {
            twoIntsStruct * data = *pointer;
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
        twoIntsStruct * data;
        data = new twoIntsStruct;
        data->intOne = 5;
        data->intTwo = 6;
        twoIntsStruct * * pointer = new twoIntsStruct *;
        *pointer = data; 
        {
            twoIntsStruct * data = *pointer;
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

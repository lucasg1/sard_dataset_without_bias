namespace NAMESPACE0
{
void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(GLOBAL_CONST_FIVE==5)
    {
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
    }
}
} 

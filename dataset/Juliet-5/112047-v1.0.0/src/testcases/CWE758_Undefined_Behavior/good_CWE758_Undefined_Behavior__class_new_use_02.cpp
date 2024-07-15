namespace NAMESPACE0
{
void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            TwoIntsClass data;
            data.intOne = 1;
            data.intTwo = 2;
            TwoIntsClass * pointer = new TwoIntsClass;
            *pointer = data; 
            {
                TwoIntsClass data = *pointer;
                printIntLine(data.intOne);
                printIntLine(data.intTwo);
            }
            delete pointer;
        }
    }
}
void FUN1()
{
    if(1)
    {
        {
            TwoIntsClass data;
            data.intOne = 1;
            data.intTwo = 2;
            TwoIntsClass * pointer = new TwoIntsClass;
            *pointer = data; 
            {
                TwoIntsClass data = *pointer;
                printIntLine(data.intOne);
                printIntLine(data.intTwo);
            }
            delete pointer;
        }
    }
}
} 

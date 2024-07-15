namespace NAMESPACE0
{
void FUN0()
{
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
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

namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            TwoIntsClass * * pointer = new TwoIntsClass *;
<START>
            TwoIntsClass * data = *pointer; 
<END>
            delete pointer;
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
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
} 

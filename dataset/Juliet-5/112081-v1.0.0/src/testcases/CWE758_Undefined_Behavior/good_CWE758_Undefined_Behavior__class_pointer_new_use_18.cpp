namespace NAMESPACE0
{
void FUN0()
{
    goto sink;
sink:
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

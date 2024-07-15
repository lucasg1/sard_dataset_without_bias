namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            twoIntsStruct * * pointer = new twoIntsStruct *;
<START>
            twoIntsStruct * data = *pointer; 
<END>
            delete pointer;
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
    }
    else
    {
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
    }
}
} 

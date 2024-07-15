void FUN0()
{
    if(globalReturnsTrue())
    {
        {
            twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));
<START>
            twoIntsStruct * data = *pointer; 
<END>
            printIntLine(data->intOne);
            printIntLine(data->intTwo);
        }
    }
}

void FUN0()
{
    goto sink;
sink:
    {
        twoIntsStruct * * pointer = (twoIntsStruct * *)ALLOCA(sizeof(twoIntsStruct *));
<START>
        twoIntsStruct * data = *pointer; 
<END>
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
    }
}

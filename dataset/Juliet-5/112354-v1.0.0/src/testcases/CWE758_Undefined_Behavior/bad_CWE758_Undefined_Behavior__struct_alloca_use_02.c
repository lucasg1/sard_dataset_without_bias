void FUN0()
{
    if(1)
    {
        {
            twoIntsStruct * pointer = (twoIntsStruct *)ALLOCA(sizeof(twoIntsStruct));
<START>
            twoIntsStruct data = *pointer; 
<END>
            printIntLine(data.intOne);
            printIntLine(data.intTwo);
        }
    }
}

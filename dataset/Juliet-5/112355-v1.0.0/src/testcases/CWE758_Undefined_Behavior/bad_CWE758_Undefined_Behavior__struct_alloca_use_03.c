void FUN0()
{
    if(5==5)
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

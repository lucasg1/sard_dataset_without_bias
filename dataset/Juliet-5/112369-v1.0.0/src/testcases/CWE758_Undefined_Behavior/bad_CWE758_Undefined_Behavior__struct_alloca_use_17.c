void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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

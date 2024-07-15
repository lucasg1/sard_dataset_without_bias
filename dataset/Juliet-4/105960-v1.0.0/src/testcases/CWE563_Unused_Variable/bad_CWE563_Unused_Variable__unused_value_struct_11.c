void FUN0()
{
    twoIntsStruct data;
    if(globalReturnsTrue())
    {
        data.intOne = 0;
        data.intTwo = 0;
    }
    if(globalReturnsTrue())
    {
<START>
        data.intOne = 1;
<END>
        data.intTwo = 1;
        printStructLine(&data);
    }
}

void FUN0()
{
    goto sink;
sink:
    {
        int intOne = 1;
        printIntLine(intOne);
<START>
        intOne = intOne;
<END>
        printIntLine(intOne);
    }
}

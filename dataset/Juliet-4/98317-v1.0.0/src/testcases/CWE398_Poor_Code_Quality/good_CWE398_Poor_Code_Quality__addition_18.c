void FUN0()
{
    goto sink;
sink:
    {
        int intOne = 1, intTwo = 1, intSum = 0;
        printIntLine(intSum);
        intSum = intOne + intTwo;
        printIntLine(intSum);
    }
}

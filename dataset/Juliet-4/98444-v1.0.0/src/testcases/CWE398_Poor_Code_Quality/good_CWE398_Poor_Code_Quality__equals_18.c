void FUN0()
{
    goto sink;
sink:
    {
        int intOne = 1, intFive = 5;
        printIntLine(intOne);
        intOne = intFive;
        printIntLine(intOne);
    }
}

void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int intOne = 1, intTwo = 1, intSum = 0;
        printIntLine(intSum);
        intSum = intOne + intTwo;
        printIntLine(intSum);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        int intOne = 1, intTwo = 1, intSum = 0;
        printIntLine(intSum);
        intSum = intOne + intTwo;
        printIntLine(intSum);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

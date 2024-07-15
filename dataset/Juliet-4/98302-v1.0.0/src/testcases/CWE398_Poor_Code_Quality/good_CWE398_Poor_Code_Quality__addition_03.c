void FUN0()
{
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int intOne = 1, intTwo = 1, intSum = 0;
            printIntLine(intSum);
            intSum = intOne + intTwo;
            printIntLine(intSum);
        }
    }
}
void FUN1()
{
    if(5==5)
    {
        {
            int intOne = 1, intTwo = 1, intSum = 0;
            printIntLine(intSum);
            intSum = intOne + intTwo;
            printIntLine(intSum);
        }
    }
}

static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        {
            int intOne = 1, intTwo = 1, intSum = 0;
            printIntLine(intSum);
            intSum = intOne + intTwo;
            printIntLine(intSum);
        }
    }
}

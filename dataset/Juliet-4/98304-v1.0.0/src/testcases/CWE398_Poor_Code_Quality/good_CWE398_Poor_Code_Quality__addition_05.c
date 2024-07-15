static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
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
    if(staticTrue)
    {
        {
            int intOne = 1, intTwo = 1, intSum = 0;
            printIntLine(intSum);
            intSum = intOne + intTwo;
            printIntLine(intSum);
        }
    }
}

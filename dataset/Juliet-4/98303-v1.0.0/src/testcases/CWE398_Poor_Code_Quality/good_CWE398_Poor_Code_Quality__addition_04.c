static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        {
            int intOne = 1, intTwo = 1, intSum = 0;
            printIntLine(intSum);
            intSum = intOne + intTwo;
            printIntLine(intSum);
        }
    }
}

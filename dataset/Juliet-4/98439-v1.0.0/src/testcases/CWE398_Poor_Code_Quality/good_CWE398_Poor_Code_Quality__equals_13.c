void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int intOne = 1, intFive = 5;
            printIntLine(intOne);
            intOne = intFive;
            printIntLine(intOne);
        }
    }
}
void FUN1()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int intOne = 1, intFive = 5;
            printIntLine(intOne);
            intOne = intFive;
            printIntLine(intOne);
        }
    }
}

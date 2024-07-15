void FUN0()
{
    if(globalFalse)
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
    if(globalTrue)
    {
        {
            int intOne = 1, intFive = 5;
            printIntLine(intOne);
            intOne = intFive;
            printIntLine(intOne);
        }
    }
}

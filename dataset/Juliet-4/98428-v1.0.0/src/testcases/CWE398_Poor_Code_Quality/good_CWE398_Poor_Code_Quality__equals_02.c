void FUN0()
{
    if(0)
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
    if(1)
    {
        {
            int intOne = 1, intFive = 5;
            printIntLine(intOne);
            intOne = intFive;
            printIntLine(intOne);
        }
    }
}

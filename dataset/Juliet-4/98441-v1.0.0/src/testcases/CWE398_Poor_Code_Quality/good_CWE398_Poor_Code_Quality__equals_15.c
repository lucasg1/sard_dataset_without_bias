void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int intOne = 1, intFive = 5;
        printIntLine(intOne);
        intOne = intFive;
        printIntLine(intOne);
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
        int intOne = 1, intFive = 5;
        printIntLine(intOne);
        intOne = intFive;
        printIntLine(intOne);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

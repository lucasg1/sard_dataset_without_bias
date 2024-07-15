void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int intOne = 1;
        printIntLine(intOne);
<START>
        intOne = intOne;
<END>
        printIntLine(intOne);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int intOne = 1, intTwo = 1, intSum = 0;
        printIntLine(intSum);
<START>
        intOne + intTwo; 
<END>
        printIntLine(intSum);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

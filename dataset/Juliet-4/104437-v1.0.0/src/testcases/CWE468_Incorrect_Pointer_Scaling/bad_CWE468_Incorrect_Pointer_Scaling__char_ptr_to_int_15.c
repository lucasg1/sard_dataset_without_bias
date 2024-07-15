void FUN0()
{
    switch(6)
    {
    case 6:
    {
        int intArray[5] = { 1, 2, 3, 4, 5 };
        char *charPointer = (char *)intArray; 
<START>
        int toPrint = (int) (*(charPointer+2));
<END>
        printIntLine(toPrint);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

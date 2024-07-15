void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int intArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int *intPointer = intArray;
        int toPrint = *(intPointer+2);
        printIntLine(toPrint);
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
        int intArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int *intPointer = intArray;
        int toPrint = *(intPointer+2);
        printIntLine(toPrint);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

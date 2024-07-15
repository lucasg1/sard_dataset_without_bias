void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            int intArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int *intPointer = intArray;
            int toPrint = *(intPointer+2);
            printIntLine(toPrint);
        }
    }
    else
    {
        {
            int intArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int *intPointer = intArray;
            int toPrint = *(intPointer+2);
            printIntLine(toPrint);
        }
    }
}

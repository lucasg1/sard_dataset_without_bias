static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
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
void FUN1()
{
    if(staticFive==5)
    {
        {
            int intArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int *intPointer = intArray;
            int toPrint = *(intPointer+2);
            printIntLine(toPrint);
        }
    }
}

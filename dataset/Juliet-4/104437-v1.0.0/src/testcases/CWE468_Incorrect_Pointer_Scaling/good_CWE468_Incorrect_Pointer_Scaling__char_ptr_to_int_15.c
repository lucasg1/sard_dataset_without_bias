void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int intArray[5] = { 1, 2, 3, 4, 5 };
        char *charPointer = (char *)intArray; 
        int toPrint = (int) (*(charPointer+(2*sizeof(int))));
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
        int intArray[5] = { 1, 2, 3, 4, 5 };
        char *charPointer = (char *)intArray; 
        int toPrint = (int) (*(charPointer+(2*sizeof(int))));
        printIntLine(toPrint);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

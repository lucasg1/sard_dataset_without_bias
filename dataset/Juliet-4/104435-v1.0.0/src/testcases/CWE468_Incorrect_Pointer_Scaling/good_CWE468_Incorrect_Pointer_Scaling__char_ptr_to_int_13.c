void FUN0()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            int intArray[5] = { 1, 2, 3, 4, 5 };
            char *charPointer = (char *)intArray; 
            int toPrint = (int) (*(charPointer+(2*sizeof(int))));
            printIntLine(toPrint);
        }
    }
}
void FUN1()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            int intArray[5] = { 1, 2, 3, 4, 5 };
            char *charPointer = (char *)intArray; 
            int toPrint = (int) (*(charPointer+(2*sizeof(int))));
            printIntLine(toPrint);
        }
    }
}

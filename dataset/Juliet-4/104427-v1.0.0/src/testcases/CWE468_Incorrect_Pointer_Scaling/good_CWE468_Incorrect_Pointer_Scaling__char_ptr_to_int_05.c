static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
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
    if(staticTrue)
    {
        {
            int intArray[5] = { 1, 2, 3, 4, 5 };
            char *charPointer = (char *)intArray; 
            int toPrint = (int) (*(charPointer+(2*sizeof(int))));
            printIntLine(toPrint);
        }
    }
}

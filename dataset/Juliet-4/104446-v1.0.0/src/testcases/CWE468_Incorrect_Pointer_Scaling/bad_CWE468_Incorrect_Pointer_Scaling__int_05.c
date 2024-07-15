static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            int intArray[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
            int *intPointer = intArray;
<START>
            int toPrint = *(intPointer+(2*sizeof(int)));
<END>
            printIntLine(toPrint);
        }
    }
}

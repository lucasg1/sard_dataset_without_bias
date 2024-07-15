void FUN0()
{
    if(1)
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

void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int intArray[5] = { 1, 2, 3, 4, 5 };
            char *charPointer = (char *)intArray; 
<START>
            int toPrint = (int) (*(charPointer+2));
<END>
            printIntLine(toPrint);
        }
    }
}

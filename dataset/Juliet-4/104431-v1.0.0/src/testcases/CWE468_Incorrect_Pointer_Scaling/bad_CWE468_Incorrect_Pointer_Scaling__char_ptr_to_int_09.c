void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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

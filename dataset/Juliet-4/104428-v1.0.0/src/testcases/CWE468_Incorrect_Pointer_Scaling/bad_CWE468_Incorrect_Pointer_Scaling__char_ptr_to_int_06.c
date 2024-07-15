static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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

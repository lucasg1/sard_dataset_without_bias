static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            int intOne = 1;
            printIntLine(intOne);
<START>
            intOne = intOne;
<END>
            printIntLine(intOne);
        }
    }
}

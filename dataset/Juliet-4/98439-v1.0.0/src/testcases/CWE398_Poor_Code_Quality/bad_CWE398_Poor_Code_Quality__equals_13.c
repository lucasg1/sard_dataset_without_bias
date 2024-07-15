void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
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

void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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

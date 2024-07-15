void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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

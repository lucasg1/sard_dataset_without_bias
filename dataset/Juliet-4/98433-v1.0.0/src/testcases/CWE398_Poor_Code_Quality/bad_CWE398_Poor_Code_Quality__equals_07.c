static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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

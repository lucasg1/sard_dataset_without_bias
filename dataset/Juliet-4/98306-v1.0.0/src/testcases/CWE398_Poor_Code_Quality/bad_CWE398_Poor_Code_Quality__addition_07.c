static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
        {
            int intOne = 1, intTwo = 1, intSum = 0;
            printIntLine(intSum);
<START>
            intOne + intTwo; 
<END>
            printIntLine(intSum);
        }
    }
}

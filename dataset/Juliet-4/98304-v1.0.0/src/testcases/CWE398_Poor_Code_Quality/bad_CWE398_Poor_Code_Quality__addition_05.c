static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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

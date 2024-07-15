static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN0())
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

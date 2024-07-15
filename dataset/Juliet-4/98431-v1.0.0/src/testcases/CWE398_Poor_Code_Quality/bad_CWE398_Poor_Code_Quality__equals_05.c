static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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

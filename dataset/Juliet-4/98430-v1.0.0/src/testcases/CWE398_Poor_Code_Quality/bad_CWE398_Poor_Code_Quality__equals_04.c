static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
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

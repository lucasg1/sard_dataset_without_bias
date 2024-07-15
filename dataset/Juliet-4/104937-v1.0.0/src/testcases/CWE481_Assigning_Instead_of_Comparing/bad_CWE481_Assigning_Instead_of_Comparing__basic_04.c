static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            int intRand = rand();
<START>
            if(intRand = 5)
<END>
            {
                printLine("i was 5");
            }
        }
    }
}

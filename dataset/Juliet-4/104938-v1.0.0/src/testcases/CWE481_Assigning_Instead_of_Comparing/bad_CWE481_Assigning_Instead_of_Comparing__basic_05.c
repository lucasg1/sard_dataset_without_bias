static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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

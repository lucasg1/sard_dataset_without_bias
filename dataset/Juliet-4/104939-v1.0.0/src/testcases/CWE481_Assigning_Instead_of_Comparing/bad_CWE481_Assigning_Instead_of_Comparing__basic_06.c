static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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

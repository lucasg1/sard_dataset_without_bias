void FUN0()
{
    if(globalReturnsTrueOrFalse())
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
    else
    {
        {
            int intRand = rand();
            if(intRand == 5)
            {
                printLine("i was 5");
            }
        }
    }
}

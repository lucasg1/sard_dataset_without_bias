void FUN0()
{
    goto sink;
sink:
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

void FUN0()
{
    goto sink;
sink:
    {
        int intRand = rand();
        if(intRand == 5)
        {
            printLine("i was 5");
        }
    }
}

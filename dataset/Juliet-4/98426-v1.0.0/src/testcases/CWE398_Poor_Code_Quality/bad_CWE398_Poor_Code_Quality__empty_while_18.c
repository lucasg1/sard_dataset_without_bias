void FUN0()
{
    goto sink;
sink:
    {
        int i = 0;
<START>
        while(i++ < 10)
<END>
        {
        }
    }
    printLine("Hello from bad()");
}

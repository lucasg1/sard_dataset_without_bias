void FUN0()
{
    if(globalReturnsTrue())
    {
        {
            int i;
<START>
            for (i = 0; i < 10; i++)
<END>
            {
            }
        }
        printLine("Hello from bad()");
    }
}

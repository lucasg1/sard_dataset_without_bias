void FUN0()
{
    if(globalTrue)
    {
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
}

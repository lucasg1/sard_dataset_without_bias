void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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

void FUN0()
{
    if(globalReturnsTrueOrFalse())
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
    else
    {
        {
            int i = 0;
            while(i++ < 10)
            {
                printLine("Inside the while statement");
            }
        }
        printLine("Hello from good()");
    }
}

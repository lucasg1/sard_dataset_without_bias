void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        {
<END>
        }
        printLine("Hello from bad()");
    }
    else
    {
        {
            printLine("Inside the block");
        }
        printLine("Hello from good()");
    }
}

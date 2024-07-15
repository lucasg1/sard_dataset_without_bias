void FUN0()
{
    if(globalTrue)
    {
<START>
        if (putchar((int)'A') == 0)
<END>
        {
            printLine("putchar failed!");
        }
    }
}

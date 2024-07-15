void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
<START>
        if (putchar((int)'A') == 0)
<END>
        {
            printLine("putchar failed!");
        }
    }
}

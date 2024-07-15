void FUN0()
{
    while(1)
    {
<START>
        if (putchar((int)'A') == 0)
<END>
        {
            printLine("putchar failed!");
        }
        break;
    }
}

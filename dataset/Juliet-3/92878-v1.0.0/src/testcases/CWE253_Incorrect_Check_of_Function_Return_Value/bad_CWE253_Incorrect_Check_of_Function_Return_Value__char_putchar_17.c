void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        if (putchar((int)'A') == 0)
<END>
        {
            printLine("putchar failed!");
        }
    }
}

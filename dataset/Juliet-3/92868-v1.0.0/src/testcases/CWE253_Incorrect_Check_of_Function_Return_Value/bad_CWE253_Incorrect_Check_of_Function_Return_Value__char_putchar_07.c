static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (putchar((int)'A') == 0)
<END>
        {
            printLine("putchar failed!");
        }
    }
}

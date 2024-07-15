static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (putc((int)'A', stdout) == 0)
<END>
        {
            printLine("putc failed!");
        }
    }
}

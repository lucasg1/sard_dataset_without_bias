static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (fputc((int)'A', stdout) == 0)
<END>
        {
            printLine("fputc failed!");
        }
    }
}

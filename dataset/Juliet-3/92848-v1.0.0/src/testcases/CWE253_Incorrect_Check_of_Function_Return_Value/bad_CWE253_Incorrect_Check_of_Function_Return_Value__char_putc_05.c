static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        if (putc((int)'A', stdout) == 0)
<END>
        {
            printLine("putc failed!");
        }
    }
}

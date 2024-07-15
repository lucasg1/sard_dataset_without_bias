static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        if (fputc((int)'A', stdout) == 0)
<END>
        {
            printLine("fputc failed!");
        }
    }
}

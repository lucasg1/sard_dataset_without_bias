static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
    }
}
void FUN1()
{
    if(staticTrue)
    {
        if (putc((int)'A', stdout) == EOF)
        {
            printLine("putc failed!");
        }
    }
}

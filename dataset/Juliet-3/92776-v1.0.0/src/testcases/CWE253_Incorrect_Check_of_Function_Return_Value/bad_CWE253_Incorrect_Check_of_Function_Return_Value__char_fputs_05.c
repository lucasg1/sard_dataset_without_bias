static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        if (fputs("string", stdout) == 0)
<END>
        {
            printLine("fputs failed!");
        }
    }
}

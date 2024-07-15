static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        if (PUTS("string") == 0)
<END>
        {
            printLine("puts failed!");
        }
    }
}

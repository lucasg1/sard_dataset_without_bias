static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            int i;
<START>
            for (i = 0; i < 10; i++)
<END>
            {
            }
        }
        printLine("Hello from bad()");
    }
}

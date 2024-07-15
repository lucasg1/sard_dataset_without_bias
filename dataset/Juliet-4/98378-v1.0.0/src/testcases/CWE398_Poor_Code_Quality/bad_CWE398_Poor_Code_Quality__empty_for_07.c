static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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

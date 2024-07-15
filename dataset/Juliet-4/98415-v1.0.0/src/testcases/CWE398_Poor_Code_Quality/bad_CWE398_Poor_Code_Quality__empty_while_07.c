static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
        {
            int i = 0;
<START>
            while(i++ < 10)
<END>
            {
            }
        }
        printLine("Hello from bad()");
    }
}

static int staticFive = 5;
void FUN0()
{
    short data;
    data = 0;
    if(staticFive==5)
    {
        data = SHRT_MIN;
    }
    if(staticFive==5)
    {
        {
<START>
            short result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
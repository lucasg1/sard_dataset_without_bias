static int staticFive = 5;
void FUN0()
{
    short data;
    data = 0;
    if(staticFive==5)
    {
        data = (short)RAND32();
    }
    if(staticFive==5)
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}
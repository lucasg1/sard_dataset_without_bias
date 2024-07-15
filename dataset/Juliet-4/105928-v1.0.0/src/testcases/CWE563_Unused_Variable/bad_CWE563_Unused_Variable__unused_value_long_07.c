static int staticFive = 5;
void FUN0()
{
    long data;
    if(staticFive==5)
    {
        data = 5L;
    }
    if(staticFive==5)
    {
<START>
        data = 10L;
<END>
        printLongLine(data);
    }
}

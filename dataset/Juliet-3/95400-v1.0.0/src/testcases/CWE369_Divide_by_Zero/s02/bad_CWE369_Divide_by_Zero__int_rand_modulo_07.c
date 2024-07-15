static int staticFive = 5;
void FUN0()
{
    int data;
    data = -1;
    if(staticFive==5)
    {
        data = RAND32();
    }
    if(staticFive==5)
    {
<START>
        printIntLine(100 % data);
<END>
    }
}

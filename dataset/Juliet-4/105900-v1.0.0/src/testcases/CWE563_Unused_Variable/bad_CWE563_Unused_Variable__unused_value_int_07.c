static int staticFive = 5;
void FUN0()
{
    int data;
    if(staticFive==5)
    {
        data = 5;
    }
    if(staticFive==5)
    {
<START>
        data = 10;
<END>
        printIntLine(data);
    }
}

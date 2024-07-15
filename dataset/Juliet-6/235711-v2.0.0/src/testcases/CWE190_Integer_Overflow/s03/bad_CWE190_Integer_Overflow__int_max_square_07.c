static int staticFive = 5;
void FUN0()
{
    int data;
    data = 0;
    if(staticFive==5)
    {
        data = INT_MAX;
    }
    if(staticFive==5)
    {
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}

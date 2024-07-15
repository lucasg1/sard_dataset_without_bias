static int staticFive = 5;
void FUN0()
{
    int data;
    data = -1;
    if(staticFive==5)
    {
        data = -5;
    }
    if(staticFive==5)
    {
        {
            int buffer[10] = { 0 };
            if (data < 10)
            {
<START>
                printIntLine(buffer[data]);
<END>
            }
            else
            {
                printLine("ERROR: Array index is too big.");
            }
        }
    }
}

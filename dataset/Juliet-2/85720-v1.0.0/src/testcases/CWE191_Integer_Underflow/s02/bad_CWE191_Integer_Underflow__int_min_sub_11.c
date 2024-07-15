void FUN0()
{
    int data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = INT_MIN;
    }
    if(globalReturnsTrue())
    {
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
    }
}

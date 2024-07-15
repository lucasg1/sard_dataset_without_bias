void FUN0()
{
    int data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = INT_MAX;
    }
    if(globalReturnsTrue())
    {
        {
<START>
            ++data;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}

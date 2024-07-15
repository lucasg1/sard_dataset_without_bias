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
        if(data < 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}

void FUN0()
{
    int data;
    data = 0;
    if(1)
    {
        data = INT_MAX;
    }
    if(1)
    {
        if(data > 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}

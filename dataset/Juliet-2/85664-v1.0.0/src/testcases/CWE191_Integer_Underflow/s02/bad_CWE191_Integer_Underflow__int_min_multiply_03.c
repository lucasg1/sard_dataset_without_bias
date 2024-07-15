void FUN0()
{
    int data;
    data = 0;
    if(5==5)
    {
        data = INT_MIN;
    }
    if(5==5)
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

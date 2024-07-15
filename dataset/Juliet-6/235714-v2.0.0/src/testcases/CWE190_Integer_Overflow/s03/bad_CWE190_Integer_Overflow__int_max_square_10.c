void FUN0()
{
    int data;
    data = 0;
    if(globalTrue)
    {
        data = INT_MAX;
    }
    if(globalTrue)
    {
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}

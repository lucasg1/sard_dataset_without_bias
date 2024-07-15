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
            data++;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}

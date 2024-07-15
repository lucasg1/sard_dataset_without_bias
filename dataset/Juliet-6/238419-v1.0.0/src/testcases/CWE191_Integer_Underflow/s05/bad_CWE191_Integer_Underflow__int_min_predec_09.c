void FUN0()
{
    int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = INT_MIN;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            --data;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}

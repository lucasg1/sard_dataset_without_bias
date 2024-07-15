void FUN0()
{
    int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = INT_MAX;
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}

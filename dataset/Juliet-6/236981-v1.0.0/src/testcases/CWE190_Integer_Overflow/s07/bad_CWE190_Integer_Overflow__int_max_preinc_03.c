void FUN0()
{
    int data;
    data = 0;
    if(5==5)
    {
        data = INT_MAX;
    }
    if(5==5)
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

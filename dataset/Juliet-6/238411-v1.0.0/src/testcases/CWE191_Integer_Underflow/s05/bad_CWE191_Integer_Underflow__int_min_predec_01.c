void FUN0()
{
    int data;
    data = 0;
    data = INT_MIN;
    {
<START>
        --data;
<END>
        int result = data;
        printIntLine(result);
    }
}

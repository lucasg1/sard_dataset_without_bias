void FUN0()
{
    int data;
    data = 0;
    data = INT_MIN;
    {
        int dataCopy = data;
        int data = dataCopy;
        {
<START>
            --data;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}

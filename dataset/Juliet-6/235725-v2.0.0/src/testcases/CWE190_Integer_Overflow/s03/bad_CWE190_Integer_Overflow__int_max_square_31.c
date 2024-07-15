void FUN0()
{
    int data;
    data = 0;
    data = INT_MAX;
    {
        int dataCopy = data;
        int data = dataCopy;
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}

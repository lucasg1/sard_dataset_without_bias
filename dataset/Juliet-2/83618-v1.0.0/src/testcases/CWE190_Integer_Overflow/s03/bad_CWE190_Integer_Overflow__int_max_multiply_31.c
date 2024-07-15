void FUN0()
{
    int data;
    data = 0;
    data = INT_MAX;
    {
        int dataCopy = data;
        int data = dataCopy;
        if(data > 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}

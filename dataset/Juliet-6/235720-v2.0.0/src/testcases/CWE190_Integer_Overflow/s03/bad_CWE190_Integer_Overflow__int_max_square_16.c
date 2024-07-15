void FUN0()
{
    int data;
    data = 0;
    while(1)
    {
        data = INT_MAX;
        break;
    }
    while(1)
    {
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
        break;
    }
}

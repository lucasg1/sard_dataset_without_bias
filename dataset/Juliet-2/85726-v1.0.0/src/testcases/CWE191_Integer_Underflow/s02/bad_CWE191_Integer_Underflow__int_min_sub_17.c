void FUN0()
{
    int i,j;
    int data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        data = INT_MIN;
    }
    for(j = 0; j < 1; j++)
    {
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
    }
}

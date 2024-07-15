void FUN0()
{
    int data;
    data = 0;
    if(globalReturnsTrue())
    {
        fscanf(stdin, "%d", &data);
    }
    if(globalReturnsTrue())
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

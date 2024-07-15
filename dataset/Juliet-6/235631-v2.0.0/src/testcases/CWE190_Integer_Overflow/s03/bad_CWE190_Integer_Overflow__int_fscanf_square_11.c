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
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}

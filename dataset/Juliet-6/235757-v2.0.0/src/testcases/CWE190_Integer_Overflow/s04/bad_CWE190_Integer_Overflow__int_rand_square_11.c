void FUN0()
{
    int data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = RAND32();
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

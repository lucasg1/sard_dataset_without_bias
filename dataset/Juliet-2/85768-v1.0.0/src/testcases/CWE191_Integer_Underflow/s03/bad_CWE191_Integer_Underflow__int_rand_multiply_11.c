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
        if(data < 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}

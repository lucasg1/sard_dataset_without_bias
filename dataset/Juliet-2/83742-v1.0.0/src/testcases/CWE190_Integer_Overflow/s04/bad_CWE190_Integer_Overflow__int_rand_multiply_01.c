void FUN0()
{
    int data;
    data = 0;
    data = RAND32();
    if(data > 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}

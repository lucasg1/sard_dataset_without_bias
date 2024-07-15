void FUN0()
{
    int data;
    data = -1;
    if(globalReturnsTrue())
    {
        fscanf(stdin, "%d", &data);
    }
    if(globalReturnsTrue())
    {
<START>
        printIntLine(100 % data);
<END>
    }
}

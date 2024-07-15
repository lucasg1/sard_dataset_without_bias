void FUN0()
{
    int data;
    data = -1;
    if(globalTrue)
    {
        fscanf(stdin, "%d", &data);
    }
    if(globalTrue)
    {
<START>
        printIntLine(100 % data);
<END>
    }
}

void FUN0()
{
    int data;
    data = -1;
    while(1)
    {
        data = RAND32();
        break;
    }
    while(1)
    {
<START>
        printIntLine(100 % data);
<END>
        break;
    }
}

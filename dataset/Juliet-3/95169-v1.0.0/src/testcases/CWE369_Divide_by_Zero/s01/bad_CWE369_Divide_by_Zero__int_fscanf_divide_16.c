void FUN0()
{
    int data;
    data = -1;
    while(1)
    {
        fscanf(stdin, "%d", &data);
        break;
    }
    while(1)
    {
<START>
        printIntLine(100 / data);
<END>
        break;
    }
}

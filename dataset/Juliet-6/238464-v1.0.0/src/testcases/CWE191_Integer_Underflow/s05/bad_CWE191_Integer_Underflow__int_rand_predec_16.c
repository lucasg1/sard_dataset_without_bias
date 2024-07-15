void FUN0()
{
    int data;
    data = 0;
    while(1)
    {
        data = RAND32();
        break;
    }
    while(1)
    {
        {
<START>
            --data;
<END>
            int result = data;
            printIntLine(result);
        }
        break;
    }
}

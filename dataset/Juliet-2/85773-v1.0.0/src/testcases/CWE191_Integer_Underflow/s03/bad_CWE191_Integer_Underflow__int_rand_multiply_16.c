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
        if(data < 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
        break;
    }
}

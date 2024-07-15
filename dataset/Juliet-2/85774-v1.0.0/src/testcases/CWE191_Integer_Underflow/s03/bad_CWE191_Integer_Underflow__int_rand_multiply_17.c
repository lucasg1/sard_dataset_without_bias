void FUN0()
{
    int i,j;
    int data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        data = RAND32();
    }
    for(j = 0; j < 1; j++)
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

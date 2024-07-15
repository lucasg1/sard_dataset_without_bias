void FUN0()
{
    int data;
    data = 0;
    if(1)
    {
        fscanf(stdin, "%d", &data);
    }
    if(1)
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

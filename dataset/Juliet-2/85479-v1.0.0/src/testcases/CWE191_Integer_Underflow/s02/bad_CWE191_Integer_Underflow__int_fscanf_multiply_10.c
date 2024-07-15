void FUN0()
{
    int data;
    data = 0;
    if(globalTrue)
    {
        fscanf(stdin, "%d", &data);
    }
    if(globalTrue)
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

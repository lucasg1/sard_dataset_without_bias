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
        {
<START>
            data++;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}

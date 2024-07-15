void FUN0()
{
    short data;
    data = 0;
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%hd", &data);
    }
    if(globalReturnsTrue())
    {
        {
<START>
            --data;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}

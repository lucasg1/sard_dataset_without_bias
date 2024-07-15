void FUN0()
{
    short data;
    data = 0;
    if(globalTrue)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(globalTrue)
    {
        {
<START>
            short result = data - 1;
<END>
            printIntLine(result);
        }
    }
}

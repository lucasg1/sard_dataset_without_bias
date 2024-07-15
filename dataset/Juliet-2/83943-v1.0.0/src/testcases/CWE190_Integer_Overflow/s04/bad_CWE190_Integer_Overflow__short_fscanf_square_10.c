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
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}

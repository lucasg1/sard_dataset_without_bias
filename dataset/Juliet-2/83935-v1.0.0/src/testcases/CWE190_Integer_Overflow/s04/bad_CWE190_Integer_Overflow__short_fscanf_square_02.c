void FUN0()
{
    short data;
    data = 0;
    if(1)
    {
        fscanf (stdin, "%hd", &data);
    }
    if(1)
    {
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}

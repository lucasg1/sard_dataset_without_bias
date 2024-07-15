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
            short result = data + 1;
<END>
            printIntLine(result);
        }
    }
}

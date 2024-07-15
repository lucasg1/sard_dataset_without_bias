void FUN0()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}

void FUN0()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    {
<START>
        short result = data * data;
<END>
        printIntLine(result);
    }
}

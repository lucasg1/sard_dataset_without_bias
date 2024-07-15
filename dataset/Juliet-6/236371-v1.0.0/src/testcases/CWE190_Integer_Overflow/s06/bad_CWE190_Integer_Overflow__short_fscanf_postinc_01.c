void FUN0()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    {
<START>
        data++;
<END>
        short result = data;
        printIntLine(result);
    }
}

void FUN0()
{
    short data;
    data = 0;
    goto source;
source:
    fscanf (stdin, "%hd", &data);
    goto sink;
sink:
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}

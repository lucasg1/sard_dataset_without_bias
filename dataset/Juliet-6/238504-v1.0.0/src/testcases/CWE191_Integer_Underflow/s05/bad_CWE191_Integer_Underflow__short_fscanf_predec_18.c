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
        --data;
<END>
        short result = data;
        printIntLine(result);
    }
}

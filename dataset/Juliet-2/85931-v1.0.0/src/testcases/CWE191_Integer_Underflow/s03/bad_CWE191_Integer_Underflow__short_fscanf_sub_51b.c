void FUN0(short data);
void FUN1()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    FUN0(data);
}
void FUN0(short data)
{
    {
<START>
        short result = data - 1;
<END>
        printIntLine(result);
    }
}

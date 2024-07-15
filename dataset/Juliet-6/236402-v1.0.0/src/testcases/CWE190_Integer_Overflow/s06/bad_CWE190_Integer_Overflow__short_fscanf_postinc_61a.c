short FUN0(short data)
{
    fscanf (stdin, "%hd", &data);
    return data;
}
short FUN0(short data);
void FUN2()
{
    short data;
    data = 0;
    data = FUN0(data);
    {
<START>
        data++;
<END>
        short result = data;
        printIntLine(result);
    }
}

void FUN0(short data)
{
    {
<START>
        --data;
<END>
        short result = data;
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    void (*funcPtr) (short) = FUN0;
    data = 0;
    fscanf (stdin, "%hd", &data);
    funcPtr(data);
}

void FUN0(short data);
void FUN1()
{
    short data;
    void (*funcPtr) (short) = FUN0;
    data = 0;
    fscanf (stdin, "%hd", &data);
    funcPtr(data);
}
void FUN0(short data)
{
    {
<START>
        short result = data * data;
<END>
        printIntLine(result);
    }
}

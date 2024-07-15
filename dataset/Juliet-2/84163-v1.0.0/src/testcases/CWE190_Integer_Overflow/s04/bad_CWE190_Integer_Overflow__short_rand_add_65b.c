void FUN0(short data);
void FUN1()
{
    short data;
    void (*funcPtr) (short) = FUN0;
    data = 0;
    data = (short)RAND32();
    funcPtr(data);
}
void FUN0(short data)
{
    {
<START>
        short result = data + 1;
<END>
        printIntLine(result);
    }
}

void FUN0(short data)
{
    {
<START>
        short result = data * data;
<END>
        printIntLine(result);
    }
}
void FUN1()
{
    short data;
    void (*funcPtr) (short) = FUN0;
    data = 0;
    data = (short)RAND32();
    funcPtr(data);
}

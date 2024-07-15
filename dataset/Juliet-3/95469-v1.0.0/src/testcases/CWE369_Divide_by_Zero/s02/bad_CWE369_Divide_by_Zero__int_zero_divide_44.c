void FUN0(int data)
{
<START>
    printIntLine(100 / data);
<END>
}
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = -1;
    data = 0;
    funcPtr(data);
}

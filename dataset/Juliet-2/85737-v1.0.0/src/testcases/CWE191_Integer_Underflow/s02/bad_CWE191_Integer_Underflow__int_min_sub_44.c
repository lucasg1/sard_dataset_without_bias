void FUN0(int data)
{
    {
<START>
        int result = data - 1;
<END>
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = 0;
    data = INT_MIN;
    funcPtr(data);
}
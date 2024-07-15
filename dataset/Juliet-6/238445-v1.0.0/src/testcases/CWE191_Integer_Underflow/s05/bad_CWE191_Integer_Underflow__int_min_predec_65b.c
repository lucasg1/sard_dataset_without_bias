void FUN0(int data);
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = 0;
    data = INT_MIN;
    funcPtr(data);
}
void FUN0(int data)
{
    {
<START>
        --data;
<END>
        int result = data;
        printIntLine(result);
    }
}

void FUN0(int data);
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = 0;
    data = INT_MAX;
    funcPtr(data);
}
void FUN0(int data)
{
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}

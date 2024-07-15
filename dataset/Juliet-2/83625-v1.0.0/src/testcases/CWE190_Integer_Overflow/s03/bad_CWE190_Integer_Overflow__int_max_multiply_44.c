void FUN0(int data)
{
    if(data > 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = 0;
<START>
    data = INT_MAX;
<END>
    funcPtr(data);
}

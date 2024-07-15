void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = INT_MIN;
    FUN0(data);
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

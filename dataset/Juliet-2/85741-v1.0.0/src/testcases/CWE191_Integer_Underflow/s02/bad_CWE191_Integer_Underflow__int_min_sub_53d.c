void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = INT_MIN;
    FUN0(data);
}
void FUN2(int data);
void FUN3(int data)
{
    FUN2(data);
}
void FUN3(int data);
void FUN0(int data)
{
    FUN3(data);
}
void FUN2(int data)
{
    {
<START>
        int result = data - 1;
<END>
        printIntLine(result);
    }
}
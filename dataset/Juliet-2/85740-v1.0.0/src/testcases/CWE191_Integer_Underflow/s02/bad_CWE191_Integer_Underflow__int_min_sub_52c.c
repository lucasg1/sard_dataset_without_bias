void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN1(int data);
void FUN3()
{
    int data;
    data = 0;
    data = INT_MIN;
    FUN1(data);
}
void FUN0(int data)
{
    {
<START>
        int result = data - 1;
<END>
        printIntLine(result);
    }
}

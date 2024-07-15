void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN3()
{
    int data;
    data = 0;
    data = INT_MAX;
    FUN2(data);
}
void FUN1(int data);
void FUN2(int data)
{
    FUN1(data);
}
void FUN6(int data);
void FUN0(int data)
{
    FUN6(data);
}
void FUN6(int data)
{
    {
<START>
        int result = data + 1;
<END>
        printIntLine(result);
    }
}

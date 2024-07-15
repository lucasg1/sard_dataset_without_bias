void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN1(int data);
void FUN3()
{
    int data;
    data = -1;
    data = 0;
    FUN1(data);
}
void FUN0(int data)
{
<START>
    printIntLine(100 % data);
<END>
}

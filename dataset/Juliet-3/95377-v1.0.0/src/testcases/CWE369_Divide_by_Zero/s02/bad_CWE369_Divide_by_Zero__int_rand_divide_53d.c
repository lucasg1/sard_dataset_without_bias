void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN0(int data)
{
    FUN2(data);
}
void FUN1(int data);
void FUN5()
{
    int data;
    data = -1;
    data = RAND32();
    FUN1(data);
}
void FUN2(int data)
{
<START>
    printIntLine(100 / data);
<END>
}

int FUN0(int data)
{
    data = RAND32();
    return data;
}
int FUN0(int data);
void FUN2()
{
    int data;
    data = -1;
    data = FUN0(data);
<START>
    printIntLine(100 % data);
<END>
}

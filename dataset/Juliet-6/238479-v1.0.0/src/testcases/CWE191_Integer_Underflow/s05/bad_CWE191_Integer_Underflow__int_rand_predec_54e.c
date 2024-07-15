void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN3(int data)
{
    FUN2(data);
}
void FUN1(int data);
void FUN5()
{
    int data;
    data = 0;
    data = RAND32();
    FUN1(data);
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
        --data;
<END>
        int result = data;
        printIntLine(result);
    }
}

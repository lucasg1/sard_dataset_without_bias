void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = INT_MAX;
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
    if(data > 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}

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
    data = 0;
<START>
    data = INT_MAX;
<END>
    FUN0(data);
}

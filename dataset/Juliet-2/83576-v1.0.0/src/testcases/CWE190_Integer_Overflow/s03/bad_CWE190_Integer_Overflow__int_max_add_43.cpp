namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = INT_MAX;
}
void FUN1()
{
    int data;
    data = 0;
    FUN0(data);
    {
<START>
        int result = data + 1;
<END>
        printIntLine(result);
    }
}
} 

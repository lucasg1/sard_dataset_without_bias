namespace NAMESPACE0
{
void FUN0(int &data)
{
    fscanf(stdin, "%d", &data);
}
void FUN1()
{
    int data;
    data = 0;
    FUN0(data);
    if(data < 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
} 

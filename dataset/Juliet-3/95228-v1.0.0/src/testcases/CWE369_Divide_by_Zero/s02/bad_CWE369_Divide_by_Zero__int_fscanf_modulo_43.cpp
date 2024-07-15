namespace NAMESPACE0
{
void FUN0(int &data)
{
    fscanf(stdin, "%d", &data);
}
void FUN1()
{
    int data;
    data = -1;
    FUN0(data);
<START>
    printIntLine(100 % data);
<END>
}
} 

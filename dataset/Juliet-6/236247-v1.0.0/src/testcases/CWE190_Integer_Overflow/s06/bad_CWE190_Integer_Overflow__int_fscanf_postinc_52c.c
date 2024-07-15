void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    FUN0(data);
}
void FUN2(int data);
void FUN0(int data)
{
    FUN2(data);
}
void FUN2(int data)
{
    {
<START>
        data++;
<END>
        int result = data;
        printIntLine(result);
    }
}

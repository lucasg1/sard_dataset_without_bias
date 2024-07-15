void FUN0(int data)
{
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}
void FUN1()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    FUN0(data);
}

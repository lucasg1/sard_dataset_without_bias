int FUN0(int data)
{
    fscanf(stdin, "%d", &data);
    return data;
}
int FUN0(int data);
void FUN2()
{
    int data;
    data = 0;
    data = FUN0(data);
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}

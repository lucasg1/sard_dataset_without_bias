void FUN0(int data)
{
    {
<START>
        ++data;
<END>
        int result = data;
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

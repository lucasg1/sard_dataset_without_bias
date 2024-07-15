void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN1(int data);
void FUN3()
{
    int data;
    data = -1;
    fscanf(stdin, "%d", &data);
    FUN1(data);
}
void FUN4(int data);
void FUN0(int data)
{
    FUN4(data);
}
void FUN4(int data)
{
    {
        int buffer[10] = { 0 };
        if (data < 10)
        {
<START>
            printIntLine(buffer[data]);
<END>
        }
        else
        {
            printLine("ERROR: Array index is too big.");
        }
    }
}

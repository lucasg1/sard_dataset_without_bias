void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
void FUN2(int data);
void FUN3(int data)
{
    FUN2(data);
}
void FUN3(int data);
void FUN5()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    FUN3(data);
}
void FUN1(int data);
void FUN2(int data)
{
    FUN1(data);
}
void FUN0(int data)
{
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}

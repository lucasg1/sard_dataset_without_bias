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
    void (*funcPtr) (int) = FUN0;
    data = 0;
    fscanf(stdin, "%d", &data);
    funcPtr(data);
}

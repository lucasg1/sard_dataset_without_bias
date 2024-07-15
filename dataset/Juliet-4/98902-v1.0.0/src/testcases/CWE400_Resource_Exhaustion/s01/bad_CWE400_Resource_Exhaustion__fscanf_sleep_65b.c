void FUN0(int count);
void FUN1()
{
    int count;
    void (*funcPtr) (int) = FUN0;
    count = -1;
    fscanf(stdin, "%d", &count);
    funcPtr(count);
}
void FUN0(int count)
{
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}

void FUN0(int * countPtr);
void FUN1()
{
    int count;
    count = -1;
    count = RAND32();
    FUN0(&count);
}
void FUN0(int * countPtr)
{
    int count = *countPtr;
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}

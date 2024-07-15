void FUN0(void * countVoidPtr);
void FUN1()
{
    int count;
    count = -1;
    count = RAND32();
    FUN0(&count);
}
void FUN0(void * countVoidPtr)
{
    int * countPtr = (int *)countVoidPtr;
    int count = (*countPtr);
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}

void FUN0(void * countVoidPtr);
void FUN1()
{
    int count;
    count = -1;
    count = 20;
    FUN0(&count);
}
void FUN2(void * countVoidPtr);
void FUN3()
{
    int count;
    count = -1;
    fscanf(stdin, "%d", &count);
    FUN2(&count);
}
void FUN0(void * countVoidPtr)
{
    int * countPtr = (int *)countVoidPtr;
    int count = (*countPtr);
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN2(void * countVoidPtr)
{
    int * countPtr = (int *)countVoidPtr;
    int count = (*countPtr);
    if (count > 0 && count <= 2000)
    {
        SLEEP(count);
        printLine("Sleep time OK");
    }
    else
    {
        printLine("Sleep time too long");
    }
}

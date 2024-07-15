namespace NAMESPACE0
{
void FUN0(int &count)
{
    fscanf(stdin, "%d", &count);
}
void FUN1()
{
    int count;
    count = -1;
    FUN0(count);
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
} 

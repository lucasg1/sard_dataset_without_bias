void FUN0(int countArray[]);
void FUN1()
{
    int count;
    int countArray[5];
    count = -1;
    fscanf(stdin, "%d", &count);
    countArray[2] = count;
    FUN0(countArray);
}
void FUN0(int countArray[])
{
    int count = countArray[2];
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}

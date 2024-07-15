static int staticFive = 5;
void FUN0()
{
    int count;
    count = -1;
    if(staticFive==5)
    {
        fscanf(stdin, "%d", &count);
    }
    if(staticFive==5)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}

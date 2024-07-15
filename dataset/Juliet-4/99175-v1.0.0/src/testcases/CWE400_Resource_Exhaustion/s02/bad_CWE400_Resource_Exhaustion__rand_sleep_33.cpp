namespace NAMESPACE0
{
void FUN0()
{
    int count;
    int &countRef = count;
    count = -1;
    count = RAND32();
    {
        int count = countRef;
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}
} 

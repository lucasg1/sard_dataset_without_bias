static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int count;
    count = -1;
    if(STATIC_CONST_FIVE==5)
    {
        fscanf(stdin, "%d", &count);
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}

static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int count;
    count = -1;
    if(staticTrue)
    {
        fscanf(stdin, "%d", &count);
    }
    if(staticTrue)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}

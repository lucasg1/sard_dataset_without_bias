static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    int count;
    count = -1;
    if(STATIC_CONST_TRUE)
    {
        fscanf(stdin, "%d", &count);
    }
    if(STATIC_CONST_TRUE)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}

static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (int *)ALLOCA(10);
    }
    {
        int source[10] = {0};
<START>
        memcpy(data, source, 10*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}

static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
    int * VAR0 = (int *)ALLOCA(50*sizeof(int));
    int * VAR1 = (int *)ALLOCA(100*sizeof(int));
    if(STATIC_CONST_FIVE==5)
    {
        data = VAR0;
    }
    {
        int source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
    }
}

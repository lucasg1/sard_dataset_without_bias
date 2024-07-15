static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
    int VAR0[50];
    int VAR1[100];
    if(staticTrue)
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

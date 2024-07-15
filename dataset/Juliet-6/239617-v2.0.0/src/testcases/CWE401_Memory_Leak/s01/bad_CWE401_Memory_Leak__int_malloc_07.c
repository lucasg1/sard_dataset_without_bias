static int staticFive = 5;
void FUN0()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(staticFive==5)
    {
<START>
<END>
        ; 
    }
}

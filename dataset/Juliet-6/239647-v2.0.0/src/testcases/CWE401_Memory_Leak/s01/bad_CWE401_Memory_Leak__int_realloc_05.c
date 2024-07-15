static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
        data[0] = 5;
        printIntLine(data[0]);
    }
    if(staticTrue)
    {
<START>
<END>
        ; 
    }
}

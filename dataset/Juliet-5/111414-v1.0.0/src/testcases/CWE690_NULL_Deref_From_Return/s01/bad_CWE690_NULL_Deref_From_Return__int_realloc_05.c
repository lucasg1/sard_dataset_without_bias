static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)realloc(data, 1*sizeof(int));
    if(staticTrue)
    {
<START>
        data[0] = 5;
<END>
        printIntLine(data[0]);
        free(data);
    }
}

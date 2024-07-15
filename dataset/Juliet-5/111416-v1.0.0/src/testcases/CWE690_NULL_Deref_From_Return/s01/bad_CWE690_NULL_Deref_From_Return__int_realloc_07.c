static int staticFive = 5;
void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)realloc(data, 1*sizeof(int));
    if(staticFive==5)
    {
<START>
        data[0] = 5;
<END>
        printIntLine(data[0]);
        free(data);
    }
}

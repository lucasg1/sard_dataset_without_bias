void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)realloc(data, 1*sizeof(int));
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        data[0] = 5;
<END>
        printIntLine(data[0]);
        free(data);
    }
}

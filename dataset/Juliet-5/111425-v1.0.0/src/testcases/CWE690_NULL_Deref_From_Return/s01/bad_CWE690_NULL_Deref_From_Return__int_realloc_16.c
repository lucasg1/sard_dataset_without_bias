void FUN0()
{
    int * data;
    data = NULL; 
    data = (int *)realloc(data, 1*sizeof(int));
    while(1)
    {
<START>
        data[0] = 5;
<END>
        printIntLine(data[0]);
        free(data);
        break;
    }
}

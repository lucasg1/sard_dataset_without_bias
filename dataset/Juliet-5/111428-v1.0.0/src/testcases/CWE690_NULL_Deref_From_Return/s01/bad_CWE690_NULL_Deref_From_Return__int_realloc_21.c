static int VAR0 = 0;
void FUN0(int * data)
{
    if(VAR0)
    {
<START>
        data[0] = 5;
<END>
        printIntLine(data[0]);
        free(data);
    }
}
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)realloc(data, 1*sizeof(int));
    VAR0 = 1; 
    FUN0(data);
}

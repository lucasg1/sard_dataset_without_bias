int VAR0 = 0;
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)malloc(1*sizeof(int));
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
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

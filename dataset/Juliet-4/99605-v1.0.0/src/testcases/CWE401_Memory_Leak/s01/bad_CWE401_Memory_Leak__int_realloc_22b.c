int VAR0 = 0;
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(int * data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
}

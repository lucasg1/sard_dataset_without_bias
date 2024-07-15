void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    data[0] = 5;
    printIntLine(data[0]);
    FUN0(data);
}
void FUN0(int * data)
{
<START>
<END>
    ; 
}

int * VAR0;
int * VAR1;
void FUN0();
void FUN1()
{
    int * data;
    data = NULL; 
    data = (int *)realloc(data, 1*sizeof(int));
    VAR1 = data;
    FUN0();
}
extern int * VAR0;
extern int * VAR1;
void FUN0()
{
    int * data = VAR1;
    if (data != NULL)
    {
        data[0] = 5;
        printIntLine(data[0]);
        free(data);
    }
}

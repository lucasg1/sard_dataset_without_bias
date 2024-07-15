int VAR0;
int VAR1;
void FUN0();
void FUN1()
{
    int data;
    data = -1;
    data = 20;
    VAR1 = data;
    FUN0();
}
extern int VAR0;
extern int VAR1;
void FUN0()
{
    int data = VAR1;
    {
        size_t i;
        int *intPointer;
        intPointer = (int*)malloc(data * sizeof(int));
        if (intPointer == NULL) {exit(-1);}
        for (i = 0; i < (size_t)data; i++)
        {
            intPointer[i] = 0; 
        }
        printIntLine(intPointer[0]);
        free(intPointer);
    }
}

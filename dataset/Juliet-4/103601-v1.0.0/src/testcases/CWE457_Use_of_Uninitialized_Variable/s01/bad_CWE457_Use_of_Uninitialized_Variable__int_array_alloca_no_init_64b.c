void FUN0(void * dataVoidPtr);
void FUN1()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    ; 
    FUN0(&data);
}
void FUN0(void * dataVoidPtr)
{
    int * * dataPtr = (int * *)dataVoidPtr;
    int * data = (*dataPtr);
    {
        int i;
        for(i=0; i<10; i++)
        {
<START>
            printIntLine(data[i]);
<END>
        }
    }
}

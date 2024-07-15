void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    ; 
    FUN0(&data);
}
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
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

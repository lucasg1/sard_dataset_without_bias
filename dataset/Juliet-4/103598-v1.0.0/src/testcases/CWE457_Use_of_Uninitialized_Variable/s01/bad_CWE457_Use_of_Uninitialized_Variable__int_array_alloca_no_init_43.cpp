namespace NAMESPACE0
{
void FUN0(int * &data)
{
    ; 
}
void FUN1()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    FUN0(data);
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
} 

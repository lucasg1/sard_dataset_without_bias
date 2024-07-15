namespace NAMESPACE0
{
void FUN0(int * &data)
{
    ; 
}
void FUN1()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
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

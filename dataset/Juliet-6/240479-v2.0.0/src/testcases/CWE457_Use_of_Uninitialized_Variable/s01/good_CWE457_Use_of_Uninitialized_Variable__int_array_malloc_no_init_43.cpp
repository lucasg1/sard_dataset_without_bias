namespace NAMESPACE0
{
void FUN0(int * &data)
{
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
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
            printIntLine(data[i]);
        }
    }
}
void FUN2(int * &data)
{
    ; 
}
void FUN3()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
    FUN2(data);
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = i;
        }
    }
    {
        int i;
        for(i=0; i<10; i++)
        {
            printIntLine(data[i]);
        }
    }
}
} 

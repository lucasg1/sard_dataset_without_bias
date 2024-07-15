namespace NAMESPACE0
{
void FUN0(int * &data)
{
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i] = i;
        }
    }
}
void FUN1()
{
    int * data;
    data = new int[10];
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
    delete [] data;
}
} 

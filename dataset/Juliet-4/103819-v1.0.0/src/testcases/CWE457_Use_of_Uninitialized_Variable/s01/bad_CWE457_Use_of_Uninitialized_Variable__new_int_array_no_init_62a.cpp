namespace NAMESPACE0
{
void FUN0(int * &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(int * &data);
void FUN2()
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

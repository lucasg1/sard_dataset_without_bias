namespace NAMESPACE0
{
void FUN0(int * * dataPtr);
void FUN1()
{
    int * data;
    data = new int[10];
    ; 
    FUN0(&data);
}
} 
namespace NAMESPACE0
{
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
    delete [] data;
}
} 

namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL; 
    {
        static int dataBuffer;
        dataBuffer = 5;
        data = &dataBuffer;
    }
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
    printIntLine(*data);
<START>
    delete data;
<END>
}
} 

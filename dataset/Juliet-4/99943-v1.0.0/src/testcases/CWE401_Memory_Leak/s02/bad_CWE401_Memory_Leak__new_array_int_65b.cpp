namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    funcPtr(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
<START>
<END>
    ; 
}
} 

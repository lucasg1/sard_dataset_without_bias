namespace NAMESPACE0
{
void FUN0(int * data)
{
<START>
<END>
    ; 
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    funcPtr(data);
}
} 

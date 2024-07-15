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
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    FUN0(data);
}
} 

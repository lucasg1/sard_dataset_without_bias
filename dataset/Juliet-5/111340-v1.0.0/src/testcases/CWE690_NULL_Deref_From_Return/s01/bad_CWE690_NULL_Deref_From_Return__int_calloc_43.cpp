namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = (int *)calloc(1, sizeof(int));
}
void FUN1()
{
    int * data;
    data = NULL; 
    FUN0(data);
<START>
    data[0] = 5;
<END>
    printIntLine(data[0]);
    free(data);
}
} 

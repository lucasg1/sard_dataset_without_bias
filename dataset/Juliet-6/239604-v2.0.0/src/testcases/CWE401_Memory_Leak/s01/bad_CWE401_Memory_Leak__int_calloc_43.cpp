namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
    data[0] = 5;
    printIntLine(data[0]);
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
<START>
<END>
    ; 
}
} 

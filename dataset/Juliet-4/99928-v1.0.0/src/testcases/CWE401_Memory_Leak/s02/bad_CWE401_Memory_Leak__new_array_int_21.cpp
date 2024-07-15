namespace NAMESPACE0
{
static int VAR1 = 0;
void FUN0(int * data)
{
    if(VAR1)
    {
<START>
<END>
        ; 
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    VAR1 = 1; 
    FUN0(data);
}
} 

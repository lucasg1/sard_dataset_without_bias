namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    fscanf(stdin, "%d", &data);
    {
        int data = dataRef;
<START>
        printIntLine(100 % data);
<END>
    }
}
} 

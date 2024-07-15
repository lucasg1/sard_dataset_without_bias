namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = -1;
    data = RAND32();
    {
        int data = dataRef;
<START>
        printIntLine(100 % data);
<END>
    }
}
} 

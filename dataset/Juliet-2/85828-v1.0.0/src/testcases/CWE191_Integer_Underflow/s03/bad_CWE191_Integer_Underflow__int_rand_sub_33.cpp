namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = 0;
    data = RAND32();
    {
        int data = dataRef;
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
} 

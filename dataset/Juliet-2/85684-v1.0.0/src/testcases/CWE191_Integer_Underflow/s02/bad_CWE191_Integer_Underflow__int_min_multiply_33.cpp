namespace NAMESPACE0
{
void FUN0()
{
    int data;
    int &dataRef = data;
    data = 0;
    data = INT_MIN;
    {
        int data = dataRef;
        if(data < 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    short data;
    short &dataRef = data;
    data = 0;
    data = (short)RAND32();
    {
        short data = dataRef;
        if(data > 0) 
        {
<START>
            short result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
} 

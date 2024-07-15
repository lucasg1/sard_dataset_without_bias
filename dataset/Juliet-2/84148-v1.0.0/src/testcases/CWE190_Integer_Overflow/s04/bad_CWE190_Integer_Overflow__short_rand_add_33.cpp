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
        {
<START>
            short result = data + 1;
<END>
            printIntLine(result);
        }
    }
}
} 

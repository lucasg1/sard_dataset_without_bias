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
        assert(data > ASSERT_VALUE);
<END>
    }
}
} 

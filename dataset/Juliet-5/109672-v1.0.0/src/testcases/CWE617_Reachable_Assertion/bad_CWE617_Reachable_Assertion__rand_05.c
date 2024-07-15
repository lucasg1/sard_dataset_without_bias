static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int data;
    data = -1;
    if(staticTrue)
    {
        data = RAND32();
    }
<START>
    assert(data > ASSERT_VALUE);
<END>
}

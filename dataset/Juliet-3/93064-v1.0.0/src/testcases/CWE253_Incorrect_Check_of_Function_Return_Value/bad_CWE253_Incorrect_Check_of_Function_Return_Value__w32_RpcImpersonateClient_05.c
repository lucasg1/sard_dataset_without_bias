static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
<START>
        if (RpcImpersonateClient(0) == RPC_S_OK)
<END>
        {
            exit(1);
        }
    }
}

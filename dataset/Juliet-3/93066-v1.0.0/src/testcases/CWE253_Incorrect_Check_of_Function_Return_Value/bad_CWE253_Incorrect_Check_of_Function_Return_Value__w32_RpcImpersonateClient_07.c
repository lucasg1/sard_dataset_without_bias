static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (RpcImpersonateClient(0) == RPC_S_OK)
<END>
        {
            exit(1);
        }
    }
}
